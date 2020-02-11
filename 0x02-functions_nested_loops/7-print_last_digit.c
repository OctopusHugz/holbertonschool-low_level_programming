#include "holberton.h"

/**
 * print_last_digit - prints the last digit of an integer
 * @n: integer passed to the argument as a function
 *
 * Return: 0 if success
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	return (n);
}
