#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10, starting at 0
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
