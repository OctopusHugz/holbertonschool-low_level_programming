#include "holberton.h"

/**
 * binary_to_uint - converts a binary numnber to an unsigned int
 * @b: binary number to convert
 *
 * Return: decimal value of binary number
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int i = 0, place_mult = 1, num = 0;
	char *string;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}
	string = malloc(len);
	if (string == NULL)
		return (0);
	len--;

	while (len >= 0)
	{
		string[i] = b[len];
		len--;
		i++;
	}

	for (i = 0; string[i]; i++)
	{
		if (string[i] == '1')
			num += (1 * place_mult);
		place_mult *= 2;
	}

	return (num);
}
