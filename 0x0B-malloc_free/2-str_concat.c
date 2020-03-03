#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

int _strlen(char *s);

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *array;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	array = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		array[i] = s2[j];

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
