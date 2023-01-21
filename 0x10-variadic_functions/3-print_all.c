#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints anything
 *@format: list of types of arguments passed to the function
 *
 *Return: nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	char *s;
	const char t_arg[] = "cifs";
	va_list arg;

	va_start(arg, format);
	while (format && format[i])
	{
	j = 0;
	while (t_arg[j])
	{
	if (format[i] == t_arg[j] && c)
	{
	printf(", ");
	break;
	} j++;
	}
	switch (format[i])
	{
	case 'c':
		printf("%c", va_arg(arg, int)), c = 1;
		break;
	case 'i':
		printf("%d", va_arg(arg, int)), c = 1;
		break;
	case 'f':
		printf("%f", va_arg(arg, double)), c = 1;
		break;
	case 's':
		s = va_arg(arg, char *), c = 1;
		if (!s)
		{
		printf("(nil)");
		break;
		}
		printf("%s", s);
		break;
		} i++;
	}
	printf("\n"), va_end(arg);
}
