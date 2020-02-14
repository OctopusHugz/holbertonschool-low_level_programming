#include "holberton.h"

/**
 * print_triangle - prints a triangle of the specified size
 * @size: integer passed to function to specify size of triangles
 */

void print_triangle(int size)
{
	int c, w, x, y, z;

	c = 1;
	z = size;
	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (x = 1; x < z; x++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= c; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
			z--;
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
