#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t linked list
 * @head: pointer to head of the list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *temp;

	if (head == NULL)
		return;
	node = head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
}
