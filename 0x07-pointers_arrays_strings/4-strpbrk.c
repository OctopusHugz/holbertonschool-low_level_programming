#include "holberton.h"
#define NULL 0
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for in string
 *
 * Return: pointer to byte in s that matches one of the bytes in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len;

	for (len = 0; accept[len]; len++)
		;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
