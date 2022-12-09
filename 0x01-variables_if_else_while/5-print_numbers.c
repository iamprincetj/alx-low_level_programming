#include <stdio.h>

/**
*main - prints all single digit numbers of base 10
*starting from 0, followed by anew line
*Return: value 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d\n", i);
		i++;
	}
	return (0);
}
