#include "holberton.h"

/**
 * strtow - splits a string into two words
 * @str: string to split
 *
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	char **args = malloc(100);
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	if (args == NULL)
		return (NULL);

	while (str[j])
	{
		if (str[j] != ' ')
		{
			args[i][j] = str[j];
			j++;
			if (str[j] == ' ')
			{
				args[i][j] = '\0';
				i++;
				j = 0;
			}
		}

		/* if (args[i][j] == '\0')
		{
			i++;
			j = 0;
		} */
		j++;
	}
	/* free(args); */
	return (args);
}
