/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *
 *@c: pointer to the variable str
 *Return: the uppercase of letters
 */

char *string_toupper(char *c)
{
	int a;
	char n;

	a = 0;
	n = ' '; /*ASCII value of space = 32*/

	while (c[a] != '\0')
	{
		if (c[a] >= 'a' && c[a] <= 'z')
			c[a] = c[a] - n;
		a++;
	}
	return (c);
}
