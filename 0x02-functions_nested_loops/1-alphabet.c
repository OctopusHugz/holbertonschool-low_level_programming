#include "holberton.h"

/**
 * main - prints the alphabet in lowercase followed by a new line
 *
 * Return: 0 if success
 *
 */


int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int x;

	for(x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
