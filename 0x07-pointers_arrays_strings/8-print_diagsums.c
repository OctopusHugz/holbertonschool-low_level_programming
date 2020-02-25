#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diags of a square matrix of ints
 * @a: pointer to array of ints
 * @size: size of array to print
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			printf("%d\n", a[i]);
		}
	}
}
