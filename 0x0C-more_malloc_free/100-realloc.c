#include <stdlib.h>
#include "main.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the prev allocated memory
 *@old_size: size of the prev allocated memory
 *@new_size: size of the newly allocated memory
 *Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1, *ptr_tmp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr_1 = malloc(new_size);

		if (ptr_1 == NULL)
			return (NULL);
		free (ptr);
		return (ptr_1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}

	ptr_1 = malloc(new_size);
	if (ptr_1 == NULL)
		return (NULL);

	ptr_tmp = ptr;

	for (i = 0; i < old_size; i++)
		ptr_1[i] = ptr_tmp[i];
	free (ptr);
	return (ptr_1);
}
