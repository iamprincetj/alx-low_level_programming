#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table.
 * @ht: A pointer to a hash table.
 *Return: None.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *new_node, *temp;
	unsigned long int itr;

	for (itr = 0; itr < ht->size; itr++)
	{
		if (ht->array[itr] != NULL)
		{
			new_node = ht->array[itr];
			while (new_node != NULL)
			{
				temp = new_node->next;
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				new_node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
