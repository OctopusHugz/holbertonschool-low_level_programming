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
	char operator;

	/*num1 = atoi(argv[1]);*/
	num2 = atoi(argv[3]);

	operator = argv[2][0];
	printf("Operator is: %c, num2 is: %i\n", operator, num2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' && operator != '-' && operator != '*' &&
	    operator != '/' && operator != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' || operator == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	get_op_func(argv[2]);

	return (0);
}
