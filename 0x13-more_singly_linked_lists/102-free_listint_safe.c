#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @h: pointer to pointer of head of the list
 *
 * Return: size of the list that was freed
 **/

size_t free_listint_safe(listint_t **h)
{
	const listint_t *node;
	size_t count = 0;

	if (*h == NULL || h == NULL)
		return (0);

	while (*h)
	{
		count++;
		if ((*h)->next >= *h)
		{
			node = *h;
			free((void *)node);
			*h = NULL;
			return (count);
		}
		node = *h;
		*h = (*h)->next;
		free((void *)node);
	}
	*h = NULL;
	return (count);
}
