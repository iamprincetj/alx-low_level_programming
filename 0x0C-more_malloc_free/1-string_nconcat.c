#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - concatenates two strings.
 *@s1: destination string
 *@s2: source string
 *@n: number of byte
 *
 *Return: NULL on failure, 0 on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, a, b, sum, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		;
	for (b = 0; s2[b]; b++)
		;
	if (n >= b)
		n = b;

	sum = a + n;

	ptr = malloc(sizeof(*ptr) * sum + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n && s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
