#include "holberton.h"

/**
 * is_prime_number - checks if given integer is a prime number
 * @n: integer to check for primality
 * @div: integer to use as divider and recurse
 *
 * Return: 1 if integer is prime number, otherwise return 0
 */

int divider(int n, int div);

int is_prime_number(int n)
{
	return (divider(n, 3));
}

/**
 * divider - divides n by div to check for primality
 * @n: integer to check for primality
 * @div: integer to use as divider and recurse
 *
 * Return: 1 if integer is prime, 0 otherwise
 */

int divider(int n, int div)
{
	if (n == div)
		return (1);
	else if (n % div == 0 || n < div)
		return (0);
	else
		return (divider(n, div + 1));
}
