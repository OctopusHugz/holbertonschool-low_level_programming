#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 * at a given index in a dlistint_t linked list
 * @h: pointer to pointer to the head of the list
 * @idx: index location to add the new node
 * @n: data for new node
 *
 * Return: address of new node, or NULL if it fails
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node, *temp;
	unsigned int count = 0;

	if (*h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	node = *h;
	while (node && count <= idx - 1)
	{
		if (idx == 0)
		{
			new_node->next = node;
			node->prev = new_node;
			*h = new_node;
			return (*h);
		}
		if (count == idx - 1 && node->next)
		{
			temp = node->next;
			node->next = new_node;
			new_node->prev = node;
			new_node->next = temp;
			temp->prev = new_node;
			return (new_node);
		}
		count++;
		node = node->next;
	}
	return (NULL);
}
