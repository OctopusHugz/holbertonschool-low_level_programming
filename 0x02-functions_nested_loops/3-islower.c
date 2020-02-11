#include "holberton.h"

/**
 * main - checks for a lowercase character
 *
 * Return: 0 if success
 */

int _islower(int c)
{
	if(c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
