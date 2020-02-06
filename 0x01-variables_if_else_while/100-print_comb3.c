#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two digits in smallest form
 * Return: 0 if no errors
 */

int main(void)
{
	int x;
	int y;

	for (x = '0'; x <= '9';)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y && x < y)
			{
			putchar(x);
			putchar(y);
			if (x != '8' || y != '9')
			{
			putchar(',');
			putchar(' ');
			}
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
