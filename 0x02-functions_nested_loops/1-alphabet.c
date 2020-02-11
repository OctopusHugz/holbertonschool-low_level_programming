#include "holberton.h"

/**
 * print_alphabet - prints the alphabet in lowercase followed by a new line
 *
 * Return: 0 if success
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
