#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of integers using the
 * jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if head is NULL or value
 * is not found in array
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	(void)size, (void)value;
	if (!list)
		return (NULL);
	return (NULL);
}
