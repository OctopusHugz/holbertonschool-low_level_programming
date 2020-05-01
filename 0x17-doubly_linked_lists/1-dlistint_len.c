#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * in a dlistint_t doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	int count = 0;

	if (h == NULL)
		return (0);
	node = h;
	while (node)
	{
		count++;
		node = node->next;
	}
	return (count);
}
