#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 **/

size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		count++;
		current_node = current_node->next;
	}

	return (count);
}
