#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string to find the length of
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
