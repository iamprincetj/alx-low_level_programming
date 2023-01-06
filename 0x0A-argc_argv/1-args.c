#include <stdio.h>

/**
 *main - prints the number of arguments passed into it
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 *
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i, p;

	for (i = 0; i < argc; i++)
		;

	p = i - 1;

	printf("%d\n", p);
	return (0);
}
