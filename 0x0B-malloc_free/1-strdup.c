#include "main.h"
#include <stdlib.h>

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter.
 *@str: the string
 *
 *Return: a pointer to the new string or NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int a, L;

	if (str == NULL)
		return (NULL);

	for (L = 0; str[L]; L++)
		;

	ptr = (char *) malloc((L + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < L; a++)
	{
		ptr[a] = str[a];
	}
	ptr[a] = '\0';

	return (ptr);
}
