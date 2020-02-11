#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by new line
 * @n: integer passed to function as argument
 *
 */

void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
		printf("\n");
	}
	else
	{
		for (x = n; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
			}
			else
			{
				printf("%d, ", x);
			}
		}
		printf("\n");
	}
}
