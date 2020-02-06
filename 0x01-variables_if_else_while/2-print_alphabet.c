#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
