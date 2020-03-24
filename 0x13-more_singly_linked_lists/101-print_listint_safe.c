#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to head of the linked list
 *
 * Return: number of nodes in the list
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *insert = current;
	int count = 0;

	if (head == NULL || current == NULL)
		return (0);

	while (current)
	{
		count++;
		if ((size_t)current != (size_t)insert - 32 &&
		    current->next && count != 1)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)current, current->n);
		insert = current;
		current = current->next;
	}
	return (count);
}
