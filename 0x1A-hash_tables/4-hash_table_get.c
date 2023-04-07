#include "hash_tables.h"

/**
 *hash_table_get - a function that retrieves a value associated with a key
 *@ht: hash table you want to look into
 *@key: key you are looking for
 *Return: the value associated with the element, or
 *	NULL if key couldn’t be found. By JUstin
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);

	new_node = ht->array[idx];
	while (new_node && strcmp(new_node->key, key) != 0)
		new_node = new_node->next;

	if (new_node == NULL)
		return (NULL);
	return (new_node->value);
}
