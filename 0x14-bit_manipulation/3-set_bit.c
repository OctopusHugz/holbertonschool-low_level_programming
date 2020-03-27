#include "holberton.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: pointer to number to set the bit value of
 * @index: index to set bit value to 1
 *
 * Return: 1 if it worked, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1 << index) | *n);
	return (1);
}
