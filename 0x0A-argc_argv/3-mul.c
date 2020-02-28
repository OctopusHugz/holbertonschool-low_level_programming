#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to function
 * @argv: array storing all arguments passed to function
 *
 * Return: product of multiplying two numbers
 */

int main(int argc, char *argv[])
{
	int prod;

	prod = 0;

	if (argc != 3)
		printf("Error\n");
	else if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	return (0);
}
