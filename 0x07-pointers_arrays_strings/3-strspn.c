#include "main.h"

/**
 *_strspn - gets the length of a prefix substring
 *
 *@s: pointer to the string input

 *@accept: substring prefix to look for.
 *Return: the number of bytes in the intial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;


	for (a = 0; s[a] != '\0'; a++)
	{
		c = 1;/*flag status(false)*/
		for (b = 0; s[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c = 0; /*success(true)*/
				break;
			}
		}
		if (c == 1)/*false*/
			break;
	}
	return (a);
}
