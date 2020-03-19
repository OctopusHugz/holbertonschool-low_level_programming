#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 **/

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
		if (current_node == NULL)
			return (count);
	}
	return (count);
}
