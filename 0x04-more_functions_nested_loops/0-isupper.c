#include "holberton.h"

/**
 * _isupper - checks if c is uppercase character
 * @c: character passed as argument to function to check if uppercase
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
