#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of 2 two digit numbers
 * Return: 0 if no errors
 */

int main(void)
{
	int w;
	int x;
	int y;
	int z;

	for (w = '0'; w <= '9';)
	{
		for (x = '0'; x <= '9';)
		{
			for (y = '0'; y <= '9';)
			{
				for (z = '1'; z <= '9'; z++)
				{
					if (w != x && w < x)
					{
						if (x != y && x < y)
						{
							if (y != z && y < z)
							{
								putchar(w);
								putchar(x);
								putchar(' ');
								putchar(y);
								putchar(z);
								putchar(',');
								if (w != '9' || x != '8' || y != '9' || z != '9')
								{
									putchar(',');
									putchar(' ');
								}
							}
						}
					}
				}
				y++;
			}
			x++;
		}
		w++;
	}
	putchar('\n');
	return (0);
}
