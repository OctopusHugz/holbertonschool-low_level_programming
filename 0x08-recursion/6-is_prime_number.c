#include "holberton.h"

/**
 * is_prime_number - checks if given integer is a prime number
 * @n: integer to check for primality
 *
 * Return: 1 if integer is prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 1 || n % 2 == 0)
		return (0);
	else
		return (1);
}
