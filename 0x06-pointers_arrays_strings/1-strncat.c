#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: string to copy to
 * @src: string to copy
 * @n: number of bytes to use
 *
 * Return: pointer to concatenated string at dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; dest[i]; i++)
		;
	for (len = 0; src[len]; len++)
		;
	if (n > len)
		n = len;
	for (j = 0; j < n; i++, j++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
