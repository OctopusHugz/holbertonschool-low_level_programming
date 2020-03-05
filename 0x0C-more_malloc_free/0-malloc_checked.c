#include "holberton.h"

/**
 * malloc_checked - allocates b number of bytes in memory using malloc
 * @b: number of bytes to malloc
 * Return: none
 */

void *malloc_checked(unsigned int b)
{
	void *vp;

	vp = malloc(b);

	if (vp == NULL)
		exit(98);
	return (vp);
}
