#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	int lineCounter = 0;

	for (i = 0; i < 10; i++)
	{
RESET:
		j = 48;

		while (lineCounter < 15)
		{
			if (j > 57)
				goto RESET;

			if (lineCounter > 9)
				_putchar (49);

			_putchar (j);

			j++;
			lineCounter++;
		}

		_putchar ('\n');
	}
}
