#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of linked list
 *
 * Return: number of elements in the list
 **/

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node)
	{
		count++;
		current_node = current_node->next;
	}

	return (count);
}
