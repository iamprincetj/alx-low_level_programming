#include <stdio.h>
/**
*main - prints all numbers of base 16 in lowercase
*followed by a new line
*use putchar function only
*Return: value 0
*/

int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
