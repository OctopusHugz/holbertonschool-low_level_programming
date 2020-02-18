#include <stdio.h>
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
	int i, len;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len + 1; i++)
	{
		dest[i] = src[i];
		printf("%c", src[i]);
	}
	return (dest);
}
