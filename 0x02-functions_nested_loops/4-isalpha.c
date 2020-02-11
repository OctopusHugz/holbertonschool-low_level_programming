#include "holberton.h"

/**
 * _isalpha - no main just function definition
 * @c: character passed to function as an argument
 *
 * Return: 0 if success
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
