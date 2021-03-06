#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node's data (n)
 * @head: pointer to pointer to the head of the list
 *
 * Return: head node's data (n) or 0 if linked list is empty
 **/

int pop_listint(listint_t **head)
{
	listint_t *del_node;
	int num = 0;

	if (*head)
	{
		num = (*head)->n;
		del_node = (*head)->next;
		free(*head);
		*head = del_node;
	}
	return (num);
}
