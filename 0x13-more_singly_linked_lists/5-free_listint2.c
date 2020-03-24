#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 *
 * @head: pointer to a pointer to the head of the list
 **/

void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
	}
	*head = NULL;
}
