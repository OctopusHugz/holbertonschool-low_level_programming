#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer to head of the list
 *
 * Return: pointer to the first node of a linked list
 **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	if (head == NULL)
		return (NULL);

	/*(*head)->next = prev;*/

	while (current->next != NULL)
	{
		current = current->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}
	(*head)->next = prev;
	prev = *head;
	return (prev);
}
