#include "holberton.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to return the square root of
 * @mult: multiplier in helper function
 *
 * Return: natural square root if exists, or -1 if it doesn't exist
 */

int findsq(int n, int mult);

int _sqrt_recursion(int n)
{
	return (findsq(n, 1));
}

/**
 * findsq - helper function to find the square and return it to _sqrt_recursion
 * @n: number to return the square root of
 * @mult: multiplier in helper function
 *
 * Return: sqrt of n if it exists, else -1
 */

int findsq(int n, int mult)
{
	if (mult * mult == n)
		return (mult);
	else if (mult * mult > n)
		return (-1);
	else
		return (findsq(n, mult + 1));
}
