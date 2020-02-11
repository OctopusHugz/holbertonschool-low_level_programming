#include "holberton.h"

/**
 * main - no main just function definition
 *
 * Return: 0 if success
 */

int _isalpha(int c)
{
	if(c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
