#include "lists.h"

/**
 * sum_dlistint - sums all of the data in a dlistint_t linked list
 * @head: pointer to head of the list
 *
 * Return: sum of all the data
 **/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int count = 0;

	if (head == NULL)
		return (count);
	node = head;
	while (node)
	{
		count += node->n;
		node = node->next;
	}
	return (count);
}
