#include "main.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *
 *@b: pointer to a string of 0 and 1 chars
 *
 *Return: the converted number or 0 if there is 1 or more chars that
 *		that is not 0 and 1 and if b == NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
