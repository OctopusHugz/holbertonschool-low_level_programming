#include "holberton.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9';)
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
