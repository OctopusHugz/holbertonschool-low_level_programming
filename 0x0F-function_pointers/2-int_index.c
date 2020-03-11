#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search for integer
 * @size: size of array to search
 * @cmp: pointer to function that compares integers and returns an int
 *
 * Return: index of first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((cmp(array[i]) != 0))
		    return (i);
	}
	if (i == size)
		return (-1);
	return (i);
}
