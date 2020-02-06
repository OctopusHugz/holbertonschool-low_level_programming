#include <stdio.h>

/**
 * main - print alphabet in lowercase followed by uppercase
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
