#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars,
 *		and initializes it with a specific char.
 *@size: the size of the array
 *@c: the initialized character
 *Return: NULL if size is 0, 0(success) otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
