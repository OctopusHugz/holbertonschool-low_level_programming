#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t linked list
 * @head: pointer to pointer to the head of the list
 * @n: number data for new node
 *
 * Return: address of the new node, or NULL if it failed
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	(*head)->prev = new_node;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
