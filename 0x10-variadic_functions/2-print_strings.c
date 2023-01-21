#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings -prints strings, followed by a new line.
 *@separator: string to be printed between strings
 *@n: number of strings to be passed into the function
 *
 *Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *s;

	va_list arg;

	va_start(arg, n);

	for (i = 1; i <= n; i++)
	{
		s = va_arg(arg, char *);

		if (s[i] != '\0')
			printf("%s", s);
		else
			printf("(nil)");

		if (separator && i != n)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arg);
}

