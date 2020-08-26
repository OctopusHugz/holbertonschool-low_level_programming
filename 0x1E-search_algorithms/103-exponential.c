#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers using
 * the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if array is NULL or value
 * is not found in array
 */

int exponential_search(int *array, size_t size, int value)
{
	unsigned int start = 1, end, jump = 2, sp, ep, mid;

	if (!array)
		return (-1);
	for (; start < size; start *= jump)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start * jump] >= value || start + (start * jump) > size)
		{
			end = start * jump;
			if (end >= size)
				end = size - 1;
			printf("Value found between indexes [%d] and [%d]\n",
				   start, end);
			break;
		}
	}
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
		if (value < array[mid])
			end = mid - 1;
		else if (value > array[mid])
			start = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
