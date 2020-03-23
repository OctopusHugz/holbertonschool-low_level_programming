#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the linked list to return the node from
 *
 * Return: nth node of a listint_t linked list
 * or NULL if the node doesn't exist
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int i = 0;

	while (current_node)
	{
		if (i == index)
			return (current_node);
		i++;
		current_node = current_node->next;
	}
	return (NULL);
}
