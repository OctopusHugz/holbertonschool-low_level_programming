#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of the linked list
 *
 * Return: number of nodes in the list
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	size_t count = 0;

	if (head == NULL)
		return (0);

	while (node)
	{
		count++;
		printf("[%p] %d\n", (void *)node, node->n);
		if (node->next >= node)
		{
			printf("-> [%p] %d\n", (void *)node->next,
			       node->next->n);
			return (count);
		}
		node = node->next;
	}
	return (count);
}
