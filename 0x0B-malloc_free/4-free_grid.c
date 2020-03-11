#include "holberton.h"

/**
 * free_grid - frees a 2D array
 * @grid: pointer to 2D array
 * @height: height of grid to free
 */

void free_grid(int **grid, int height)
{
	int rows;

	if (height > 0)
	{
		for (rows = 0; rows < height; rows++)
			free(grid[rows]);
	}
	free(grid);
}
