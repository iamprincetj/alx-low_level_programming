#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *@width: the width of the array
 *@height: the height of the array
 *
 *Return: NULL on failure, otherwise 0 on success
 */

int **alloc_grid(int width, int height)
{
	int n, i;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int *));

		if (ptr[i] == NULL)
		{
			free(ptr);
			for (n = 0; n <= i; n++)
			{
				free(ptr[n]);
			}
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			ptr[i][n] = 0;
	}

	return (ptr);
}
