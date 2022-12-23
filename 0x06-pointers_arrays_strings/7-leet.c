/**
 *leet - encodes a string into 1337
 *@c: pointer to the variable s
 *
 *Return: c
 *
 */

char *leet(char *c)
{
	int a, b;
	int lwr[] = {97, 101, 111, 116, 108};
	int upr[] = {65, 69, 79, 84, 76};
	int nums[] = {52, 51, 48, 55, 49};

	for (a = 0; c[a] != '\0'; a++) /* iterate values in array s*/
	{
		/**
		 *looping through array values five time to check
		 *if the value is equal to the value of lwr or any value
		 *of upr, if it is replace it with the value of nums
		 */

		for (b = 0; b < 5; b++)
		{
			if (c[a] == lwr[b] || c[a] == upr[b])
			{
				c[a] = nums[b];
				break;
			}
		}
	}
	return (c);
}
