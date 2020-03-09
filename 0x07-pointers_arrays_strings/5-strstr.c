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

	for (i = 0; haystack[i]; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j]; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					if (needle[j + 1] == '\0')
						return (haystack + i);
				}
				else
				{
					break;
				}
			}
		}

	}

	if (haystack[i] == needle[j])
		return (haystack);
	else
		return (NULL);
}
