#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int *beg, *end, i, j, tmp;

	beg = a;
	end = a;

	/* move end pointer to last element in array */

	for (j = 0; j < n - 1; j++)
		end++;

	for (i = 0; i < n / 2; i++)
	{
		tmp = *beg;
		*beg = *end;
		*end = tmp;
		beg++;
		end--;
	}
}
