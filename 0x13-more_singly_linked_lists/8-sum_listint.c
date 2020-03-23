#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: pointer to head of the linked list
 *
 * Return: sum of all the data or 0 if the list is empty
 **/

int sum_listint(listint_t *head)
{
	listint_t *current_node = head;
	int sum = 0;

	while (current_node)
	{
		sum += current_node->n;
		current_node = current_node->next;
		if (current_node == NULL)
			return (sum);
	}
	return (0);
}
