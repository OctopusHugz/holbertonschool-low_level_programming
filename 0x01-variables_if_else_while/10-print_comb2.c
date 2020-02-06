#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single digit numbers
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
			putchar(x);
			putchar(y);
			if (x != '9' || y != '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
