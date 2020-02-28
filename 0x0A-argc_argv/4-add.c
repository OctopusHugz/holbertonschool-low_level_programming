#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed to function
 * @argv: array storing all arguments passed to function
 *
 * Return: the sum of all numbers passed to function,
 * or error if any argument is not a number
 */

int main(int argc, char *argv[])
{
	int i, sum;

	i = 1;
	sum = 0;

	if (argc >= 3)
	{
		for (; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else if (argc == 1)
		printf("0\n");
	return (0);
}
