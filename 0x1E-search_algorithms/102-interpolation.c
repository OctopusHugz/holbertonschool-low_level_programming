#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 * the interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL or value
 * is not found in array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	for (; low <= high;)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));
		if (pos < size)
			printf("Value checked array[%u] = [%u]\n", (unsigned int)pos,
				   (unsigned int)array[pos]);
		else
		{
			printf("Value checked array[%u] is out of range\n",
				   (unsigned int)pos);
			return (-1);
		}
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return ((int)pos);
	}
	return (-1);
}
