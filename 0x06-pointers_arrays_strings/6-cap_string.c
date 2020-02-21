#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: string with all words capitalized
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i];)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
			i++;
	}
	return (str);
}
