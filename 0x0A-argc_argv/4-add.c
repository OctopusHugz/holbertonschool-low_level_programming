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
	int i, j, sum;

	sum = 0;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (isdigit(argv[i][j]) && (atoi(argv[i]) > 0))
				{
					sum += atoi(&argv[i][j]);
					j++;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	else if (argc == 2 && atoi(argv[1]) > 0)
		printf("%d\n", atoi(argv[1]));
	else if (argc == 1)
		printf("0\n");
	return (0);
}
