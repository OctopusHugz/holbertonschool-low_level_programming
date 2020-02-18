#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print in reverse
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	/* get strlen */

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	/* print in reverse from strlen to 0 */

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
