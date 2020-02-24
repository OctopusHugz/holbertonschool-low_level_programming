#include "holberton.h"
#define NULL 0

/**
 * _strchr - locates a character in a string
 * @s: string to search for char
 * @c: char to locate
 *
 * Return: pointer to first occurrence of c in s or NULL if char is not found
 */

char *_strchr(char *s, char c)
{
	int i, len;

	for (len = 0; s[len]; len++)
		;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if (c == '\0')
			return (s + len);
	}
	return (NULL);
}
