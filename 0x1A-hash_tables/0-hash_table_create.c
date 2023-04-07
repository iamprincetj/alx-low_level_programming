#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table.
 *@size: the size of the array
 *
 *Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int itr;

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * table->size);

	if (table->array == NULL)
	{
		/*free(table);*/
		return (NULL);
	}

	for (itr = 0; itr < table->size; itr++)
		table->array[itr] = NULL;

	return (table);
}
