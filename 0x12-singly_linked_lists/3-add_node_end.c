#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to pointer at head of linked list
 * @str: string to be duplicated and placed at end of list
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (tail->next != NULL)
		tail = tail->next;
	tail->next = new_node;
	return (tail);
}


/**
 * _strlen - returns the length of a string
 * @string: string to return the lenght of
 *
 * Return: 0 if success
 */

int _strlen(const char *string)
{
	int len;

	for (len = 0; string[len]; len++)
		;

	return (len);
}
