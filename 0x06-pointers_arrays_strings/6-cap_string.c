#include "holberton.h"

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

	for (i = 0; str[i]; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else
		{
			for (j = 0; sep[j]; j++)
			{
				if (str[i] == sep[j])
				{
					i++;
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] -= 32;
				}
			}
		}
	}
	return (str);
}
