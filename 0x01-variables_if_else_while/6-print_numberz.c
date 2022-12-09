#include <stdio.h>

/**
*main - prints all single digit numbers of base 10
*starting from zero, followed by a new line
*not allowed to use type char, use only putchar
*Return: value 0 (success)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
