#include "holberton.h"

/**
 * free_grid - frees a 2D array
 * @grid: pointer to 2D array
 * @height: height of grid to free
 */

void free_grid(int **grid, int height)
{
	if (height > 0)
		free(grid);
}
