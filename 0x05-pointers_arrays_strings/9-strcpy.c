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
	int len;

	for (len = 0; src[len]; len++)
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}
