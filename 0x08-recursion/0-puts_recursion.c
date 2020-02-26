#include "holberton.h"

/**
 * _puts_recursion - recursively prints a string followed by new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	i++;
	_puts_recursion(s + i);
}
