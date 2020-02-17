#include "holberton.h"

/**
 * swap_int - swaps the value of two integers
 * @a: First int to switch
 * @b: Second int to switch
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
