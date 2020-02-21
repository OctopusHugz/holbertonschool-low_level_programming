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
	char sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; str[i];)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else
				i++;
		}
		else
		{
			for (j = 0; str[i];)
			{
				if (sep[j] == str[i])
				{
					i++;
					str[i] -= 32;
				}
				else
					j++;
			}
			i++;
		}
	}
	return (str);
}
