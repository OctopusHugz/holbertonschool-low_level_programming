#include "holberton.h"

/**
 * _strcmp - compares first letter of two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between ascii values of first letters
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;

	if (s1[i] == s2[j])
	{
		i++;
		j++;
	}

	return (s1[0] - s2[0]);
}
