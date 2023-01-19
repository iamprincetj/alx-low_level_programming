#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - returns the sum of all its parameters.
 *@n: first argument of the function
 *
 *Return: 0 success
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int param, sum = 0;

	/* initialize the argument list from the start */
	va_start(ap, n);

	/* iterate through all parameter values*/
	for (param = 0; param < n; param++)
		/* get the next parameter value and add it to sum*/
		sum += va_arg(ap, int);
	/*Clean up*/
	va_end(ap);

	return (sum);
}
