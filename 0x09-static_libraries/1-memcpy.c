#include "main.h"

/**
 *_memcpy - copies memory area.
 *
 *@dest: pointer to the destination where src memory address
 *is to be copied to
 *@src: pointer to the source to copy from
 *@n: number of byte to be copied
 *
 *Return: a pointer to dest
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
