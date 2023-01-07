#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *main - adds positive numbers
 *
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 1 to indicate an error, otherwise 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
