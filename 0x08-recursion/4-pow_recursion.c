#include "main.h"

/**
 *_pow_recursion - returns the value of x raised to the
 *			power of y
 *@x: the integer to find its raised to power of y
 *@y: the power x is raised to
 *
 *Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
