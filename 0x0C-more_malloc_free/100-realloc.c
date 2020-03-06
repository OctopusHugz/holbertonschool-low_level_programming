#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to memory previously allocated by malloc
 * @old_size: size, in bytes, of allocated space for ptr
 * @new_size: new size, in bytes, of memory block
 *
 * Return: void pointer to reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int true_size;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	/* find size_diff to determine # of mem blocks to leave uninitialized 
	if (new_size > old_size)
	size_diff = new_size - old_size; */

	if (new_size > old_size)
		true_size = old_size;
	else if (new_size < old_size)
		true_size = new_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
}

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to fill memory area with
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
