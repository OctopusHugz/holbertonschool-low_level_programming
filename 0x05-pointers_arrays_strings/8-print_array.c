#include <stdio.h>
#include "holberton.h"

/**
 * print_array - prints n elements of an array of integers, and \n
 * @a: array of integers to print
 * @n: number of elements in array to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%i", a[i]);
		}
		else
		{
			printf("%i, ", a[i]);
		}
	}
	printf("\n");
}
