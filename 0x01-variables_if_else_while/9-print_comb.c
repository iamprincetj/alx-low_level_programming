#include <stdio.h>

/**
*main - prints all possible combinations of single
*digit numbers separated by ",", followed by a space
*use only putchar function
*Return: value 0 (success)
*/

int main(void)
{
	int a;
	int b = ',';
	int c = ' ';

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(b);
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
