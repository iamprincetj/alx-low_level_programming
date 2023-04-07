#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_node;
	unsigned long int itr;
	unsigned char str = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (itr = 0; itr < ht->size; itr++)
	{
		if (ht->array[itr] != NULL)
		{
			if (str == 1)
				printf(", ");

			new_node = ht->array[itr];
			while (new_node != NULL)
			{
				printf("'%s': '%s'", new_node->key, new_node->value);
				new_node = new_node->next;
				if (new_node != NULL)
					printf(", ");
			}
			str = 1;
		}
	}
	printf("}\n");
}
