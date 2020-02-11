#include "holberton.h"

/**
 * _islower - checks for a lowercase character and returns 1 if true, 0 if not
 * @c: character passed to function as an argument
 *
 * Return: 0 if success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
