#include "holberton.h"

/**
 * print_triangle - prints a triangle of the specified size
 * @size: integer passed to function to specify size of triangles
 */

void print_triangle(int size)
{
	int w, x, y, z;

	z = size;
	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (x = 1; x < z; x++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= z; y++)
			{
				_putchar('#');
			}
			z--;
		}
	}
	else
	{
		_putchar('\n');
	}
}
