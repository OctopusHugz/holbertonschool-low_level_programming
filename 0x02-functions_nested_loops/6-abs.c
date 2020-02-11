#include "holberton.h"

/**
 * main - no main just function definition
 *
 * Return: 0 if success
 */

int _abs(int n)
{
	if(n < 0)
	{
		return (-n);
	}
	else if(n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
