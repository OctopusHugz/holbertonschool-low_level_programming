#include <unistd.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to 2D array of ints
 * @width: width of 2D array
 * @height: height of 2D array
 *
 * Return: pointer to 2D array of ints
 */

int _putchar(char c);

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width < 0 || height < 0)
		return (NULL);

	array =  (int **) malloc(sizeof(int) * (width * height));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
		printf("i is: %d, j is: %d\n", i, j);
		_putchar('\n');
	}
	free(array);
	return (array);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
