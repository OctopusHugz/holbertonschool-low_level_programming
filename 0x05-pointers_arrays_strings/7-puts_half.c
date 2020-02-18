#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by \n
 * @str: string to print half of
 */

void puts_half(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		j = (len - 1) / 2;
		i = len - j;
	}
	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
