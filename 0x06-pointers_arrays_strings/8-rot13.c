#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: rot13 encoded string
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'M')
			str[i] += 13;
		else if (str[i] >= 'a' && str[i] <= 'm')
			str[i] += 13;
		else if (str[i] >= 'N' && str[i] <= 'z')
			str[i] -= 13;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] -= 13;
	}
	return (str);
}
