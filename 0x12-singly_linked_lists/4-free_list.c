#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 **/

void free_list(list_t *head)
{
	list_t *new_node;

	while (head)
	{
		new_node = head;
		head = head->next;
		free(new_node->str);
		free(new_node);
	}
}
