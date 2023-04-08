#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
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
                return (NULL);

        for (itr = 0; itr < size; itr++)
                table->array[itr] = NULL;

        return (table);
}
