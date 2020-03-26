#include "holberton.h"

/**
 * print_binary - recursively prints a binary number
 * @n: decimal number to print in binary
 *
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
	}
	else if (n % 2 == 0)
	{
		print_binary(n / 2);
		_putchar('0');
	}
	else if (n % 2 == 1)
	{
		print_binary(n / 2);
		_putchar('1');
	}
}
