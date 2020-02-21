#include "holberton.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: string encoded into 1337
 */

char *leet(char *str)
{
	int i, j;

	char *s = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == str[i])
				str[i] = n[j];
		}
	}
	return (str);
}
