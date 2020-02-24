#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search for char
 * @c: char to locate
 *
 * Return: pointer to first occurrence of c in s or NULL if char is not found
 */

char *_strchr(char *s, char c)
{
	int i;
	char *NULL = NULL;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		else if (s[i] == '\0')
		{
			return (NULL);
		}
	}
	return (s);
}
