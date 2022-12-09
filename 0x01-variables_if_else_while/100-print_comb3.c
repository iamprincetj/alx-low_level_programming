#include <stdio.h>
/**
*main - print all possible different combinations of two digits
*separated by ",", followed by a space
*putchar function only, no variable typr char
*Return: value 0
*/

int main(void)
{
	int a, b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
