#include "lists.h"

/**
 * print_list - prints all the elements of a list_T list
 * @h: pointer to the linked list head
 *
 * Return: the number of nodes in the linked list
 **/

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current_node = h;

	if (h == NULL)
		return (0);

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
			count++;
		}
		else
		{
			printf("[%d] %s\n", current_node->len,
			       current_node->str);
			count++;
		}
		current_node = current_node->next;
		if (current_node == NULL)
			return (count);
	}
	return (count);
}
