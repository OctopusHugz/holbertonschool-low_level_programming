#include "search_algos.h"

/**
 * linear_skip - searches for a value in an array of integers using the
 * linear search algorithm
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if head is NULL or value
 * is not found in array
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *temp;
	size_t pi, length;

	if (!list)
		return (NULL);
	node = list;
	length = list_len(list);
	if (node->express)
		node = node->express;
	while (node /* ->express */)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   pi, node->index);
			while (temp->index <= node->index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					   pi, temp->n);
				if (temp->n == value)
					return (temp);
				temp = temp->next;
				pi++;
			}
		}
		else if (!node->express)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   node->index, length - 1);
			while (node->index <= length - 1)
			{
				printf("Value checked at index [%lu] = [%d]\n",
					   node->index, node->n);
				if (node->n == value)
					return (node);
				if (node->next)
					node = node->next;
				else
					break;
			}
		}
		pi = node->index;
		temp = get_nodeint_at_index2(list, pi);
		node = node->express;
	}
	return (NULL);
}

/**
 * get_nodeint_at_index2 - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the linked list
 * @index: index of the linked list to return the node from
 *
 * Return: nth node of a listint_t linked list
 * or NULL if the node doesn't exist
 **/

skiplist_t *get_nodeint_at_index2(skiplist_t *head, unsigned int index)
{
	skiplist_t *current_node = head;
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

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the head of the linked list
 * Return: number of elements in the linked list
 **/

size_t list_len(const skiplist_t *h)
{
	int count = 0;
	const skiplist_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		count++;
		current_node = current_node->next;
		if (current_node == NULL)
			return (count);
	}
	return (count);
}
