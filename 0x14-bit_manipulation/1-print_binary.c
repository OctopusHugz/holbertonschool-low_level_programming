#include "holberton.h"

/**
 * print_binary - recursively prints a binary number
 * @n: decimal number to print in binary
 *
 */

void print_binary(unsigned long int n)
{
	int i;

	if (n == ULONG_MAX)
	{
		for (i = 0; i < 32; i++)
			_putchar('1');
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else if (is_even(n))
	{
		print_binary(n >> 1);
		_putchar('0');
	}
	else
	{
		print_binary(n >> 1);
		_putchar('1');
	}
}

/**
 * is_even - checks if number is odd or even
 * @n: decimal number to find if even
 *
 * Return: 1 if even, 0 if odd
 */

int is_even(unsigned long int n)
{
	unsigned long int i = 0;

	while (i <= n)
	{
		i += 2;
		if (i == n)
			return (1);
	}
	return (0);
}
