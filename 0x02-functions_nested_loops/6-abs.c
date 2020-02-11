#include "holberton.h"

/**
 * _abs - returns absolute value of an integer
 * @n: integer passed to the function as an argument
 *
 * Return: 0 if success
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
