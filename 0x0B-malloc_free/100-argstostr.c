#include "main.h"
#include <stdlib.h>

/**
 *argstostr - concatenates all the arguments of your program
 *@ac: argument count
 *@av: argument vector
 *
 *Return: a pointer to a new string or NULL on failure
 */

char *argstostr(int ac, char **av)
{
	int a, b, c, len;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/

	len = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len++;
	}

	ptr = (char *) malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	ptr[c] = '\0';

	return (ptr);
}
