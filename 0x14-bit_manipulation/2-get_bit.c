#include "holberton.h"

/**
 * get_bit - gets the bit at a given index
 * @n: number to find the bit value of
 * @index: bit index to find the value of
 *
 * Return: the bit's value at the given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if ((n >> (index)) & 1)
		return (1);
	else
		return (0);
}
