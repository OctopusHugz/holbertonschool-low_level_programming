#include <stdio.h>

/**
 * main - print alphabet in lowercase (except for q and e)
 * Return: 0 if no errors
 */

int main(void)
{
	int x;

	if (x != 'e' && x != 'q')
	{
		for (x = 'a'; x <= 'z'; x++)
			if (x == 'e' || x == 'q')
			{
				x++;
			}
			else
			{
				putchar(x);
			}
		putchar('\n');
		return (0);
}
