#include <stdio.h>
#include <math.h>

/**
 * main - returns largest prime factorial of a number
 *
 * Return: 0 if success
 */

int main(void)
{
	int div;
	long int store;

	div = 3;
	store = 612852475143;

	while (div <= sqrt(store) && div >= 3)
	{
		if (store % div == 0)
		{
			store = store / div;
		}
		else
		{
			div = div + 2;
		}
	}
	printf("%d", div);
	printf("\n");
	return (0);
}
