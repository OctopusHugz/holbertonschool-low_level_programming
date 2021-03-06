#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node
 * at given index of a dlistint_t linked list
 * @head: pointer to pointer to the head of the list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeds, or -1 if it fails
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head, *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (node->next)
		{
			node = node->next;
			*head = node;
			node->prev = NULL;
		}
		else
			*head = NULL;
		free(temp);
		return (1);
	}
	while (node && count <= index - 1)
	{
		if (count == index - 1)
		{
			if (node->next)
			{
				temp = node->next;
				if (temp->next)
					node->next = temp->next, temp->next->prev = node;
				else
					temp = node->next, node->next = NULL;
			}
			free(temp);
			return (1);
		}
		count++;
		node = node->next;
	}
	return (-1);
}
