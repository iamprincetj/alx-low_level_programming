#include <stdio.h>

/**
*main - prints the alphabet in lowercase
*print all letters excecpt q and e
*followed by a new line
*Return: value 0 (success)
*/

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
