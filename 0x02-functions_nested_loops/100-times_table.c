#include "holberton.h"

/**
 * print_times_table - prints the nth times table
 * @num_rows: number of rows to print
 * @num_cols: number of columns to print
 * @n: intenger to print times table of
 */

void print_helper(int num_rows, int num_cols);

void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		print_helper(n, n);
	}
}

/**
 * print_helper - prints the times tables
 * @num_rows: number of rows to print
 * @num_cols: number of columns to print
 */

void print_helper(int num_rows, int num_cols)
{
	int row, col, prod, prod_two;

	for (row = 0; row <= num_rows; row++)
	{
		for (col = 0; col <= num_cols; col++)
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
