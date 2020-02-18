#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print every other character of
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	for (; str[i] != '\0'; i++)
	{
		len++;
	}
	if (len == 0)
	{
		return;
	}
	else
	{
		for (i = 0; i < len - 1; i++)
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
