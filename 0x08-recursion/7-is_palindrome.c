#include "holberton.h"

/**
 * is_palindrome - checks whether a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is a palindrome, 0 if not
 */

int pal_check(char *s, int beg, int end);

int _strlen_recursion(char *s);

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return (pal_check(s, 0, len - 1));
}

/**
 * pal_checker - helps the is_palindrome function determine if it's palinddrome
 * @s: string to check if palindrome
 * @beg: beginning of string
 * @end: end of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int pal_check(char *s, int beg, int end)
{
	if (*(s + beg) != *(s + end))
		return (0);
	if (beg >= end)
		return (1);
	else
		return (pal_check(s, beg + 1, end - 1));
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
