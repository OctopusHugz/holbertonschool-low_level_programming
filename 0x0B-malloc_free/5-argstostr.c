#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argc or number of arguments provided to program
 * @av: argv or array storing arguments
 * Return: pointer to new string or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *array;
	int rows, cols, av_len, i;

	rows = 0, av_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* find strlen of av[rows][cols] and store in av_len */
	for (; rows < ac; rows++)
		for (cols = 0; av[rows][cols]; cols++)
			av_len++;

	/* malloc memory for new array and null check */
	array = malloc(av_len * sizeof(char) + 1);
	if (array == NULL)
		return (NULL);

	/* start copying av into array */
	rows = 0, i = 0;
	for (; rows < ac; rows++, i++)
	{
		for (cols = 0; av[rows][cols]; i++, cols++)
			array[i] = av[rows][cols];
		array[i] = '\n';
	}
	array[i + 1] = '\0';
	return (array);
}
