/**
 *cap_string - capitalizes all words of a string.
 *
 *@a: pointer to the variable str
 *
 *Return: capitalized words
 *
 */

char *cap_string(char *a)
{
	int i;
	char n;

	n = ' ';

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (i == 0 || a[i - 1] == n)
			{
				a[i] = a[i] - n;
			}
			else if (a[i - 1] == ',' || a[i - 1] == ';' ||
					a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"'
					|| a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{'
					|| a[i - 1] == '}' || a[i - 1] == 9 || a[i - 1] == 10
					|| a[i - 1] == '.')
			{
				a[i] = a[i] - n;
			}
		}
	}
	return (a);
}
