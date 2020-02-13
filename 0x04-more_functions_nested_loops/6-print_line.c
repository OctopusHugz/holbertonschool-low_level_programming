#include "holberton.h"

/**
 * print_line - prints a straight line of length n in the terminal
 */

void print_line(int n)
{
	int i;
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
