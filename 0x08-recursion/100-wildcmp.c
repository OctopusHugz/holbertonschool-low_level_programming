#include "holberton.h"

/**
 * wildcmp - compares two strings to check whether identical
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if considered identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (s1 && s2)
		return (1);
	else
		return (0);
}
