#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers -  prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers to pass in the function
 *
 *Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;
	int j;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		j = va_arg(args, int);
		printf("%d", j);

		if (separator && i != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
