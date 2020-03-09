#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: rot13 encoded string
 */

char *rot13(char *str)
{
	int i, j;

	char *norm = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; norm[j]; j++)
		{
			if (str[i] == norm[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
