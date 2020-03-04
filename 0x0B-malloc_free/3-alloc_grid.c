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
	int i, j;
	int **array;

	if (width < 0 || height < 0)
		return (NULL);

	array = (int **) malloc(sizeof(int) * height + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			array[i][j] = 0;

		*(array + height + 1) =  malloc(sizeof(int) * height);

	}
	free(array);
	return (array);
}
