#include "holberton.h"
#define LOWER_CHECK (str[i] >= 'a' && str[i] <= 'z')

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: string with all words capitalized
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		      '{', '}'};

	for (i = 0; i < 1; i++)
	{
		if (LOWER_CHECK)
			str[i] -= 32;
	}
	for (i = 1; str[i]; i++)
	{
		for (j = 0; sep[j]; j++)
		{
			if (str[i] == sep[j])
			{
				i++;
				if (LOWER_CHECK)
					str[i] -= 32;
				else
				{
					i++;
					if (LOWER_CHECK)
						str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
