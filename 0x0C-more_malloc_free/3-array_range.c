#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: low end of array of integers
 * @max: high end of array of integers
 *
 * Return: pointer to array of integers
 */

int *array_range(int min, int max)
{
	int i, size;
	int *array;

	if (min > max)
		return (NULL);

	size = 1;
	size += max - min;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	array[0] = min;
	for (i = min + 1; i <= max; i++)
		array[i] = i;

	return (array);
}
