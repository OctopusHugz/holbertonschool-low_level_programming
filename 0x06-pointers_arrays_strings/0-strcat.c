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
	int i, len;

	for (i = 0; dest[i]; i++)
		;

	for (len = 0; src[len]; len++)
	{
		dest[i] = src[len];
		i++;
	}

	return (dest);
}
