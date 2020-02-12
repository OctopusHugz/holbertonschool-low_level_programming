#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int large;

	if (a > b && a > c)
	{
		large = a;
	}
	else if (b > a && b > c)
	{
		large = b;
	}
	else if (c > a && c > b)
	{
		large = c;
	}
	return (large);
}
