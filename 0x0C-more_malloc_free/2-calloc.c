#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size in bytes of each element (nmemb) in array
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	char *array;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	total_size = nmemb * size;

	array = (char *) malloc(total_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
		array[i] = 0;

	return ((void *)array);
}
