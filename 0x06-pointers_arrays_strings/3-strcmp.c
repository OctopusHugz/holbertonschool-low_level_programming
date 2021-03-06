#include "holberton.h"

/**
 * _strcmp - compares first letter of two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference between ascii values of first letters
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	for (i = 0; s1[i] && s2[i];)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			break;
		}
	}
	return (s1[i] - s2[i]);
}
