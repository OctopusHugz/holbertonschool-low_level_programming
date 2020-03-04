#include <unistd.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to 2D array of ints
 * @c: char to print
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
