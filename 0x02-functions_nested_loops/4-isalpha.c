#include "main.h"

/**
*_isalpha - checks for alphabetic character
*@c: the character to check
*
*Return: 1 if c is a letter, lowercase or uppercase
*/

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
