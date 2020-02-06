#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 3 digits
 * Return: 0 if no errors
 */

int main(void)
{
	int x;
	int y;
	int z;

	for (x = '0'; x <= '9';)
	{
		for (y = '1'; y <= '9';)
		{
			for (z = '2'; z <= '9'; z++)
			{
				if (x != y && x < y)
				{
					if (y != z && y < z)
					{
						putchar(x);
						putchar(y);
						putchar(z);
						putchar(',');
						putchar(' ');
					}
				}
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
