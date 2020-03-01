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
	int i, sum, j;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] == '-')
				{
					i++;
					if (i == argc)
						break;
				}
				else if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", sum);
	return (0);
}
