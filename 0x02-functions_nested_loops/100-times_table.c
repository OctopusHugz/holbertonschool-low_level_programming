#include <stdio.h>
#include "holberton.h"

/**
 * print_times_table - prints the nth times table
 * @n: intenger to print times table of
 */

void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n < 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
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
}
