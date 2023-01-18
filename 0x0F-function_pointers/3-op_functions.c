#include "3-calc.h"

/**
 *op_add - adds two integers
 *@a: first integer
 *@b: second integer
 *
 *Return: 0 (success)
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts two integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplys two integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - finds th mod of two integers
 *@a: first integer
 *@b: second integer
 *Return: 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
