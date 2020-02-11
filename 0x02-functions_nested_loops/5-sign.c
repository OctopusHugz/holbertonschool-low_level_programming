#include "holberton.h"

/**
 * print_sign - no main just function definition
 * @n: character passed to function as an argument
 *
 * Return: 0 if success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
