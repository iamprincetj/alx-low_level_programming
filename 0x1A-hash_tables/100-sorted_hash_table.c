#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - a function that creates a sorted hash table.
 * @size: The size of new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *head;
	unsigned long int itr;

	head = malloc(sizeof(shash_table_t));
	if (head == NULL)
		return (NULL);

	head->size = size;
	head->array = malloc(sizeof(shash_node_t *) * size);
	if (head->array == NULL)
		return (NULL);
	for (itr = 0; itr < size; itr++)
		head->array[itr] = NULL;
	head->shead = NULL;
	head->stail = NULL;

	return (head);
}

/**
 * shash_table_set - A function that adds an element to a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnode, *temp;
	char *value_dup;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->snext;
	}

	newnode = malloc(sizeof(shash_node_t));
	if (newnode == NULL)
	{
		free(value_dup);
		return (0);
	}
	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(value_dup);
		free(newnode);
		return (0);
	}
	newnode->value = value_dup;
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;

	if (ht->shead == NULL)
	{
		newnode->sprev = NULL;
		newnode->snext = NULL;
		ht->shead = newnode;
		ht->stail = newnode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newnode->sprev = NULL;
		newnode->snext = ht->shead;
		ht->shead->sprev = newnode;
		ht->shead = newnode;
	}
	else
	{
		temp = ht->shead;
		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
			temp = temp->snext;
		newnode->sprev = temp;
		newnode->snext = temp->snext;
		if (temp->snext == NULL)
			ht->stail = newnode;
		else
			temp->snext->sprev = newnode;
		temp->snext = newnode;
	}

	return (1);
}

/**
 * shash_table_get - A function that retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *newnode;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	newnode = ht->shead;
	while (newnode != NULL && strcmp(newnode->key, key) != 0)
		newnode = newnode->snext;

	return ((newnode == NULL) ? NULL : newnode->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *newnode;

	if (ht == NULL)
		return;

	newnode = ht->shead;
	printf("{");
	while (newnode != NULL)
	{
		printf("'%s': '%s'", newnode->key, newnode->value);
		newnode = newnode->snext;
		if (newnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *newnode;

	if (ht == NULL)
		return;

	newnode = ht->stail;
	printf("{");
	while (newnode != NULL)
	{
		printf("'%s': '%s'", newnode->key, newnode->value);
		newnode = newnode->sprev;
		if (newnode != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *newnode, *temp;

	if (ht == NULL)
		return;

	newnode = ht->shead;
	while (newnode)
	{
		temp = newnode->snext;
		free(newnode->key);
		free(newnode->value);
		free(newnode);
		newnode = temp;
	}

	free(head->array);
	free(head);
}
