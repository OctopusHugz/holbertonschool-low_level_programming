#include <stdio.h>

/**
 * main - prints all single digits of base 10 starting from 0
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
