#include "lists.h"

/**
 * print_dlistint -
 *
 * Return:
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	int count = 0;

	if (h == NULL)
		return (0);
	node = h;
	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
