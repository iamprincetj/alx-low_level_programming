#include "main.h"

/**
 *_strstr - locates a substring
 *@haystack: pointer to the input string
 *@needle: substring to search for
 *
 *Return: a pointer to the beginning of the located
 *	substring or NULL if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialize a helping variable
	 * to assist in returning one of
	 * our parameters pointers haystack
	*/

	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;
		for (; *n != '\0' && *haystack == *n; n++)
		{
			haystack++;
		}
		if (!*n)
			return (h);
	}
	return ('\0');
}
