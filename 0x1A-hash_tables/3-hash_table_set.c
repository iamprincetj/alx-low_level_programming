#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	unsigned long int idx, itr;
	char *value_dup;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
	{
		return (0);
	}
	value_dup = strdup(value);

	if (value_dup == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	for (itr = idx; ht->array[itr]; itr++)
	{
		if (strcmp(ht->array[itr]->key, key) == 0)
		{
			free(ht->array[itr]->value);
			ht->array[itr]->value = value_dup;
			return (1);
		}
	}

	head = malloc(sizeof(hash_node_t));
	if (head == NULL)
	{
		free(value_dup);
		return (0);
	}
	head->key = strdup(key);

	if (head->key == NULL)
	{
		free(head);
		return (0);
	}
	head->value = value_dup;
	head->next = ht->array[idx];
	ht->array[idx] = head;
	return (1);
}
