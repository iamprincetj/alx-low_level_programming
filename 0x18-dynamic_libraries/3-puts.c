#include "main.h"

/**
*_puts - prints a string, followed by a new line, to stdout.
*@str: parameter to input
*/

void _puts(char *str)
{
	int a;

	for (a = 0; str[a]; a++)
		_putchar(str[a]);
	_putchar('\n');
}
