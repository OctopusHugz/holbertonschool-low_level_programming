#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times, followed by a \n
 */

void more_numbers(void)
{
	int i, x;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
			}
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
