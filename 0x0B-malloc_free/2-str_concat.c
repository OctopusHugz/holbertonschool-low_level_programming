#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */

int _strlen(char *s);

char *_strcat(char *dest, char *src);

char *str_concat(char *s1, char *s2)
{
	char *array;
	void *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	array = (char *) malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	array = _strcat(s1, s2);
	ptr = &array;

	if (array == NULL)
		return (NULL);

	free(array);

	return (ptr);
}

/**
 * _strcat - concatenates two strings
 * @dest: base string
 * @src: string to append
 *
 * Return: Pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len;

	/* get strlen and store in len */

	for (len = 0; src[len]; len++)
		;
	/* move counter to null terminating byte */
	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < len; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
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
