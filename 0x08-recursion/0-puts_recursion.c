#include "holberton.h"

/**
 * _puts_recursion - recursively prints a string followed by new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
