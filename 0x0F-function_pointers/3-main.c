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
	int num2;

	/*num1 = atoi(argv[1]);*/
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' || *argv[2] != '-' || *argv[2] != '*' || *argv[2] != '/'
	    || *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	get_op_func(argv[2]);

	return (0);
}
