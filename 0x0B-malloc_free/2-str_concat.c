#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: first string
 *@s2: second string
 *
 *Return: NULL on failure, 0 (success) otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a, b, L, L1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (L = 0; s1 && s1[L]; L++)
		;
	for (L1 = 0; s2 && s2[L1]; L1++)
		;

	ptr = (char *) malloc((L + L1 + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a]; a++)
	{
		ptr[a] = s1[a];
	}

	for (b = 0; s2[b]; b++)
	{
		ptr[a] = s2[b];
		a++;
	}

	ptr[a] = '\0';

	return (ptr);
}
