#include <stdio.h>

/**
 * main - prints all numbers of base-16 in lowercase
 * Return: 0 if no errors
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
