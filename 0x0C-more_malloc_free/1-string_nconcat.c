#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string, base string
 * @s2: second string, gets appended to base
 *
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	
	/* find len of s1 and store in len1 */
	for (len1 = 0; s1[len1];)
		len1++;
	
	/* find len of s2 and store in len2 */
	for (len2 = 0; s2[len2];)
		len2++;

	/* check value of len2 against n */
	if (n >= len2)
		n = len2;

	/* malloc all bytes for s1 and n bytes for s2 and 1 for null byte */
	array = malloc(len1 + n + 1 * sizeof(char));
	if (array == NULL)
		return (NULL);

	/* copy s1 into new array */
	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	/* copy s2 into new array until n */
	for (j = 0; j < n; i++, j++)
		array[i] = s2[j];
	array[i] = '\0';
	
	/* return pointer to concatenated string */
	return (array);
}
