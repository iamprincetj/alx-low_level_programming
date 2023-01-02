#include "main.h"

/**
 *_strchr - locates a character in a string.
 *@s: pointer to the string
 *@c: character to locate
 *Return: a pointer to the first occurence of c
 *
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/

	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
