#include "holberton.h"

/**
 * create_array - creates an array of specified size and initializes it to char
 * @size: size of array to create
 * @c: char to initialize array with
 *
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
