#include "holberton.h"

/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string to find the length of
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	static int len = 1;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len - 1);
}
