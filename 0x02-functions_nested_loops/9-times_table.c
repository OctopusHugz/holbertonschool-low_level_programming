#include <stdio.h>
#include "holberton.h"

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: 0 if success
 */

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			prod = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(prod / 10 + '0');
				}
				_putchar(prod % 10 + '0');
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
