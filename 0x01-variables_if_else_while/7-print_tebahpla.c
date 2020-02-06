#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
