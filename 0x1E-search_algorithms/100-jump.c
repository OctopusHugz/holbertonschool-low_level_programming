#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using the
 * jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL or value
 * is not found in array
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int start = 0, jump = sqrt(size), end = start + jump;

	if (!array)
		return (-1);
	for (; start < size; start += jump, end = start + jump)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (end >= size)
			end = size - 1;
		if (array[end] >= value || start + jump > size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			break;
		}
	}
	for (; start <= end /* && start < size */; start++)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return ((int)start);
	}
	return (-1);
}
