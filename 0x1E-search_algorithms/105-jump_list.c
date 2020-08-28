#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of integers using the
 * jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if head is NULL or value
 * is not found in array
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *node, *temp;
	size_t jump = sqrt(size), prev_index, next_index;

	if (!list)
		return (NULL);
	prev_index = list->index;
	next_index = prev_index + jump;
	temp = list;
	while (temp->next)
	{
		node = get_nodeint_at_index(list, next_index);
		printf("Value checked at index [%lu] = [%d]\n", next_index, node->n);
		if (node->n >= value || !node->next)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   prev_index, next_index);
			while (temp->index <= next_index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					   temp->index, temp->n);
				if (value == temp->n)
					return (temp);
				else if (temp->next)
					temp = temp->next;
				else
					break;
			}
		}
		temp = get_nodeint_at_index(list, next_index);
		prev_index = temp->index;
		next_index = prev_index + jump;
		if (next_index >= size)
			next_index = size - 1;
	}
	return (NULL);
}

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
