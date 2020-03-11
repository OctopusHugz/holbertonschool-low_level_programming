#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s: string to return the length of
 *
 * Return: pointer to concatenated string
 */

int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = (char *) malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		array[i] = s1[i];

	for (j = 0; s2[j]; i++, j++)
		array[i] = s2[j];
	array[i] = '\0';

	return (array);
}

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
