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

	for (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '9';)
		{
			if (w == '0' && x == '1' && y == '0' && z =='0')
			{

				for (y = '0'; y <= '9'; y++)
				{
					if (y != '9' && z != '9')
					{
						for (z = '0'; z <= '9';)
						{
							putchar(w);
							putchar(x);
							putchar(' ');
							putchar(y);
							if (w == '0' && x == '0' && y == '0' && z == '0')
							{
								z++;
								putchar(z);
								z++;
							}
							else
							{
								putchar(z);
								z++;
							}
							putchar(',');
							putchar(' ');
						}
					}
					else
					{
						x++;
					}
				}
			}
		}
		putchar('\n');
		return (0);

	}
}
