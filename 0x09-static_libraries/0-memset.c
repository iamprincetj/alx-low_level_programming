#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: pointer to a char the memory to be filled
 *@b: the character to fill s
 *@n: the number of byte to memory area s
 *Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/**
	  * declaring an unsigned int because we will be storing
	  * a value that will always be greater than or equal to
	  * zero.
	  */

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
