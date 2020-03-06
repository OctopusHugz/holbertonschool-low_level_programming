#include <unistd.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array of ints
 */

int **alloc_grid(int width, int height)
{
	int rows, columns;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (rows = 0; rows < height; rows++)
	{
		array[rows] = malloc(width * sizeof(int));
		if (array[rows] == NULL)
		{
			for (; rows >= 0; rows--)
			{
				free(array[rows]);
			}
			free(array);
			return (NULL);
		}
	}

	for (rows = 0; rows < height; rows++)
	{
		for (columns = 0; columns < width; columns++)
			array[rows][columns] = 0;
	}

	return (array);
}
