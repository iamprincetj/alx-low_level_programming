#include "main.h"

/**
*_abs - computes the absolute value of an integer
*@n: n parameter to compute
*Return: absolute value of n
*/

int _abs(int n)
{

	if (n >= 0)
	{
		return (n);
	}
	return (n * -1);
}
