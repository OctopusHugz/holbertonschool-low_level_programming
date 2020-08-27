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
	listint_t *node;
	size_t jump = sqrt(size), prev_index, next_index;

	if (!list)
		return (NULL);
	prev_index = list->index;
	next_index = prev_index + jump;
	while (next_index < size /* list */)
	{
		node = list;
		while (node->index < next_index)
			node = node->next;
		printf("Value checked array[%d] = [%d]\n", (int)next_index, node->n);
		if (node->n > value)
		{
			printf("Value found between indexes [%d] and [%d]\n",
				   (int)prev_index, (int)next_index);
			while (list->index < next_index)
			{
				printf("Value checked array[%d] = [%d]\n", (int)list->index,
					   list->n);
				if (value == list->n)
					return (list);
				list = list->next;
			}
		}
		while (list->index < next_index)
			list = list->next;
		prev_index = list->index;
		next_index = prev_index + jump;
	}
	return (NULL);
}
