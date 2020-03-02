#include "holberton.h"

/**
 * atoi - translates ascii value to integer
 * @s: string/char to turn into integer
 *
 * Return: integer value of s
 */

int _atoi(char *s)
{
	if (*s)
		print_number(*(s + 1));
	return(0);
}

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
