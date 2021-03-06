#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to add to new node at given index
 *
 * Return: address of the new node, or NULL if it failed
 **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}


	while (current_node && i < idx - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
