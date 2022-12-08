#include <stdio.h>

/**
 * main - print exactly "and that piece of art is useful"
 *  - Dora Korpar, 2015-10-19," to the standard eror.
 * followed by a new line
 *  Return: must have value 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
