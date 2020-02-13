#include "holberton.h"

/**
 * more_numbers - prints the numbers from 0 to 14, 10 times, followed by a newline
 */

void more_numbers(void)
{
	int i, x, y;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
			{
				putchar(x / 10 + '0');
			}
			putchar(x % 10 + '0');
		}
		putchar('\n');
	}
}
