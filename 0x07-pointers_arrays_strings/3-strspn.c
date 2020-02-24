#include "holberton.h"

/**
 * _strspn - searches a string for a set of bytes
 * @s: initial string to search
 * @accept: substring to search for
 *
 * Return: number of bytes in s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len, count;
	count = 0;

	for (len = 0; accept[len]; len++)
		;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == len)
			break;
	}
	return (count);
}
