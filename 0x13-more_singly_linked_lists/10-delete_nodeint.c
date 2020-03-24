#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node of a
 * listint_t linked list at index passed to function
 * @head: pointer to pointer to head of the list
 * @index: index of the node to delete fromo the linked list
 *
 * Return: 1 if function succeeded or -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node && i < index - 1)
	{
		current_node = current_node->next;
		i++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temp = current_node->next->next;
	free(current_node->next);
	current_node->next = temp;

	return (1);
}
