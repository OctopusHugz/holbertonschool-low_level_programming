#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of spaces to put before diagonal line
 */

void print_diagonal(int n)
{
	int i, j, k;

	k = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < k; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			k++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
