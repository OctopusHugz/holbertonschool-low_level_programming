#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: buffer to append to
 * @src: string to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to the string at dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy src into dest while src contains values and i < n */

	for (i = 0; src[i] && i < n;)
	{
		dest[i] = src[i];
		i++;
	}

	/* return the copied string */
	return (dest);
}
