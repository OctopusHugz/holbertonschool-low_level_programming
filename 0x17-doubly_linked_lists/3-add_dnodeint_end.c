#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t linked list
 * @head: pointer to pointer of the head of the list
 * @n: number value for new node
 *
 * Return: address of the new node, or NULL if it fails
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tail;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new_node;
	/* new_node->prev = *head; */
	tail = new_node;
	return (tail);
}
