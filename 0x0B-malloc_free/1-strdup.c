#include "holberton.h"

/**
 * _strdup - copies a string into newly allocated memory and returns pointer
 * @str: string to copy into new memory space
 *
 * Return: pointer to newly allocated memory
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	/* loop through str to find length and store in len if str != NULL */

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	/* malloc memory for new array and return NULL if not enough memory */

	array = (char *) malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	/* copy str into new array */

	for (i = 0; i < len; i++)
		array[i] = str[i];

	/* return pointer to newly allocated memory */

	return (array);
}
