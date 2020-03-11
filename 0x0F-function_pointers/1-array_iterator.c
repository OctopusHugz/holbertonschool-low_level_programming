#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element in the array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function to perform on each element in array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
