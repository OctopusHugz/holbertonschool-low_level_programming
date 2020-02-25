#include "holberton.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: string to find in haystack
 *
 * Return: pointer to beginning of located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;

	for (i = 0; haystack[i];)
	{
		for (; needle[j];)
		{
			if (haystack[i] == needle[j])
			{
				j++;
				return (haystack + i);
			}
			else
				i++;
		}
	}
	return (NULL);
}
