#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print every other character of
 */

void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0';)
	{
		i++;
	}
	for (j = 0; j < i - 1; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
