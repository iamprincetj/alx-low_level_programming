#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: pointer to the input string
 *@accept: pointer to string to search for in s
 *Return: pointer to the bytes in s or Null if no such byte i found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
