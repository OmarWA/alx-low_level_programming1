#include "main.h"

/**
 * _isdigit - Checks whether a given character represents a digit of not
 * @c: given character to check
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int isDigit = 0;

	int i;

	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			isDigit = 1;
	}
}
