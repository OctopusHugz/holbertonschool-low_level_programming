#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of the linked list
 *
 * Return: address of the node where the loop starts, or NULL if no loop
 **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node = head;

	if (head == NULL)
		return (NULL);

	while (node)
	{
		if (node->next >= node)
			return (node);
		node = node->next;
	}
	node = NULL;
	return (node);
}
