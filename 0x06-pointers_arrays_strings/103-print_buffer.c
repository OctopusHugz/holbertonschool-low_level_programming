#include <stdio.h>
#include "holberton.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer to print
 */

void print_buffer(char *b, int size)
{
	if (size < 0)
		printf("\n");
	printf("%s\n", b);
}
