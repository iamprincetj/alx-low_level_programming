#include "main.h"

/**
 *is_prime - checks if the inputed number is a prime number
 *@n: inputed number
 *@i: iterator.
 *Return: 1 if n is a prime number, 0 otherwise
 *
 */

int is_prime(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}


/**
 *is_prime_number - returns 1 if the input integer is a prime number
 *			otherwise return 0
 *@n: integer to check if it's a prime number
 *Return: 1 if n is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
		return (0);
	return (is_prime(n, 2));
}
