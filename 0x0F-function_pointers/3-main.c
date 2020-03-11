#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

/**
 * main - performs simple operations depending on operator provided
 * @argc: number of arguments provided to main
 * @argv: array storing all arguments
 *
 * Return: result of operation, or error code if fail
 */

int main(int argc, char **argv)
{
	int num1, num2;
	char operator;
	int (*op)(int, int) = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator = argv[2][0];

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op(num1, num2));

	return (0);
}
