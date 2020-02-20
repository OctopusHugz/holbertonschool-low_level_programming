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

	/* move to end of dest */

	for (j = 0; dest[j];)
	{
		j++;
	}

	/* find len of src */
	for (len = 0; src[len];)
	{
		len++;
	}
/* loop through i and append to dest up until n bytes */

	for (i = 0; i < n; i++, j++)
	{
		if (len < n && i == n - 1)
		{
			dest[j] = src[i];
			dest[j] = '\0';
		}
		else
		{
			dest[j] = src[i];
		}
	}

	/* return pointer to concatenated string */
	return (dest);
}
