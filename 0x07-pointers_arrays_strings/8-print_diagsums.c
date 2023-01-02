#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers.
 *@a: input pointer
 *@size: size of the matrix
 *
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = 0;
	sum1 = 0;

	int size1 = size * size;

	for (i = 0; i < size1; i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size1 - 1)
			sum1 += a[i];
	}
	printf("%d, %d\n", sum, sum1);
}
