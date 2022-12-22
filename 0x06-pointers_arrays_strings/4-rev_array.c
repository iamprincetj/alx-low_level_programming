#include <stdio.h>

/**
 *reverse_array - reverses the content of an array of integers
 *@a: pointer to the variable a
 *@n: number of elements of the array
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
	int size, i, b, last;

	size = n;
	last = size - 1;

	for(i = 0; last > i; i++)
	{
		b = a[i];
		a[i] = a[last];
		a[last] = b;
		last--;
	}
}
