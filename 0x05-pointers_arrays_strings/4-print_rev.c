#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;

	/* get strlen */

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}

	/* print in reverse from strlen to 0 */
	i--;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
