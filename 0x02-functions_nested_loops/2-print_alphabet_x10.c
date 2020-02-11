#include "holberton.h"

/**
 * main - print the alphabet followed by a newline, 10 times
 *
 * Return: 0 if success
 */

void print_alphabet_x10(void)
{
	int x, y;

	for(x = 0; x < 10; x++)
	{
		for(y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
