#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the linked list
 * @head: pointer to the pointer of the start of the linked list
 * @str: string to be duplicated and placed in new node at head of list
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = *head;

	if (head == NULL)
		return (NULL);

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
	free(new_node);
}
