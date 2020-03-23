#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 **/

void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head)
	{
		new_node = head;
		head = new_node->next;
		free(new_node);
	}
}
