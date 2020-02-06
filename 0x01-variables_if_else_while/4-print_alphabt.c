#include <stdio.h>

/**
 * main - print alphabet in lowercase (except for q and e)
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z';)
	{
		if (x == 'e' || x == 'q')
		{
			x++;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
