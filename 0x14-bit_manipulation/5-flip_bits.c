#include "holberton.h"

/**
 * flip_bits - finds number of bits you would
 * need to go from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to switch
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int zor = n ^ m;
	unsigned int count = 0;

	while (zor)
	{
		count += zor & 1;
		zor >>= 1;
	}
	return (count);
}
