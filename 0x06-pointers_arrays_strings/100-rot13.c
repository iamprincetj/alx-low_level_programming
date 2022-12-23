#include <stdio.h>

/**
 *rot13 - encodes a string using rot13
 *@c: pointer to the variable s
 *
 *Return: c
 */

char *rot13(char *c)
{
	int a, b;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpharot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == alpha[b])
			{
				c[a] = alpharot[b];
				break;
			}
		}
	}
	return (c);
}
