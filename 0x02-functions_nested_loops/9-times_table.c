#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0 if success
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			z = ((x - '0') * (y - '0'));
			_putchar(z);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
