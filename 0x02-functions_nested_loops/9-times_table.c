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

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			if (col < 9)
			{
				prod = row * col;
				if (prod >= 0 && prod < 10)
				{
					_putchar(prod + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				prod = row * col;
				if (prod >= 0 && prod < 10)
				{
					_putchar(prod + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
					_putchar('\n');
				}
			}
		}
		//putchar('\n');
	}
}
