#include "holberton.h"

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 if not
 */

int helper(char *s, char *end, int len);

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	return (helper(s, s + _strlen_recursion(s), _strlen_recursion(s)));
}

/**
 * helper - helps the is_palindrome function determine if it's a palinddrome
 * @s: string to check if palindrome
 * @len: length of string to check
 *
 * Return: 1 if palindrome, 0 if not
 */

int helper(char *s, char *end, int len)
{
	if (&s == &end && len % 2 != 0)
	    return (1);
	else if ((&s == (&end - 1) && s == end))
		return (1);
	else if (s == end)
		return (helper(s + 1, end - 1, len));
	else
		return (0);
}

/**
 * _strlen_recursion - returns length of a string recursively
 * @s: string to find the length of
 *
 * Return: length of string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
