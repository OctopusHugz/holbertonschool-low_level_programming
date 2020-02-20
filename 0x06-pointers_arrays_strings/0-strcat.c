#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: base string
 * @src: string to append
 *
 * Return: Pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	/* get strlen and store in len */

	for (len = 0; src[len]; len++)
		;
	/* move counter to null terminating byte */
	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < len; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
