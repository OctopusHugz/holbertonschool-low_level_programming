#include "holberton.h"

/**
 * _atoi - translates ascii value to integer
 * @s: string/char to turn into integer
 *
 * Return: integer value of s
 */

int _atoi(char *s)
{
	int num = 0, i = 0, negs = 0;

	while (s[i])
	{
		if (s[i] == '-')
			negs++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	if (negs % 2 != 0)
		num = -num;
	return (num);
}
