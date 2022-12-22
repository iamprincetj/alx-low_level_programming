/**
 *_strcmp - compares two strings
 *
 *@s1: 1st string to compare
 *@s2: other string to compare
 *
 *Return: 0 if the two strings are equal
 *		> 0 if s1 has the greater ASCII value
 *		< 0 if S2 has the greater ASCII value
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	/**
	 *iterate through src and compare
	 *it with dest
	 */
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		/**
		 *if they differ by a single character
		 *don't iterate further
		 */
		if (s1[i] != s2[i])
		{
			/**
			 *return the diff btw the two characters
			 */
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
