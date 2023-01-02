#include "main.h"

/**
 * _isupper - checks whether a given character represents an upper case
 * alphabetical character or not.
 *
 *@c: the character to be checked
 *Return: 0 if the char is not upper-case char, 1 if it is an upper-case char
*/
int _isupper(int c)
{
	int isUpper = 0;

	for (int i = 65; i <= 90; i++)
	{
		if (c == i)
			isUpper = 1;
	}

	return (isUpper);
}
