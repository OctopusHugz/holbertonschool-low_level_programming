#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to return the square root of
 *
 * Return: natural square root if exists, or -1 if it doesn't exist
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n);
}
