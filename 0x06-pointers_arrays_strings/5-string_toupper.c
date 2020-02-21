#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * char * - string to be changed to uppercase
 *
 * Return: returns uppercase string
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
