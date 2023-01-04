#include "main.h"

/**
 *factorial - returns the factorial of a given number
 *
 *@n: number to find its factorial
 *
 *Return: the factorial of the integer n
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
		return (-1); /*to indicate an error*/
	return (n * factorial(n - 1));
}
