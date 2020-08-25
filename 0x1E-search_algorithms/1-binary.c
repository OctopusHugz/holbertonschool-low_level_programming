#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using the
 * binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL or value
 * is not found in array
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int start = 0, end = size - 1, mid = (start + end) / 2, sp, ep;

	if (!array)
		return (-1);
	for (; start <= end;)
	{
		sp = start;
		ep = end;
		printf("Searching in array: ");
		while (sp <= ep)
		{
			printf("%d", array[sp]);
			if (sp != ep)
				printf(", ");
			else
				printf("\n");
			sp++;
		}
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
