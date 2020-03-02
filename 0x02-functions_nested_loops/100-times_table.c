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
	int prod_two;

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
						_putchar(' ');
						_putchar(prod + '0');
					}
					else if (prod >= 10 && prod < 100)
					{
						_putchar(' ');
						_putchar(prod / 10 + '0');
						_putchar(prod % 10 + '0');
					}
					else
					{
						prod_two = prod / 10;
						_putchar(prod / 100 + '0');
						_putchar(prod_two % 10 + '0');
						_putchar(prod % 10 + '0');
					}
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
