#include <stdio.h>

/**
 * main - prints all possible combinations of 2 two digit numbers
 * Return: 0 if no errors
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (y > x)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
				if (x == 98 && y == 99)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
