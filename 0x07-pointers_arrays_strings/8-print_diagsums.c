#include <stdio.h>
#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diags of a square matrix of ints
 * @a: pointer to array of ints
 * @size: size of array to print
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;

	/* find diagonal from top lef to bottom right */
	for (i = 0; i < size; i++)
	{
		s1 += *(a + (size * i + i));
	}

	/* find diagonal from bottom right to top left */
	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		if (i == 0)
			s2 += *(a + (size * j));
		else
			s2 += *(a + (size * i - i));
	}
	printf("%d, %d\n", s1, s2);
}
