#include "holberton.h"

/**
 * _puts - puts a string, followed by \n, to stdout
 * @str: string to put to stdout
 */

void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
