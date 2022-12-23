#include "main.h"

/**
 *print_number -  prints an integer.
 *use _putchar function only, don't use long
 *not using arrays or pointers
 *
 *@n: number to be printed
 */

void print_number(int n)
{
	unsigned int m;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
