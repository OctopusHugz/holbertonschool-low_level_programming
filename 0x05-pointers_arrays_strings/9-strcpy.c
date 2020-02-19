#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src to buffer pointed to by dest
 * @dest: buffer destination to print to
 * @src: string to copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[len])
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
