#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: String to return the lenght of
 *
 * Return: 0 if success
 */

int _strlen(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
	_putchar('\n');
}
