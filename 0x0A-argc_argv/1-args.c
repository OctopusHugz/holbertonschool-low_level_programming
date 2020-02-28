#include <stdio.h>

/**
 * main - prints number of arguments passed into it
 * @argc: number of arguments passed to main
 * @argv: array storing all arguments
 *
 * Return: number of arguments passed to main, argc
 */

int main(int argc, char *argv[])
{
	if (argv[1])
		printf("%d\n", argc - 1);
	else
		printf("0\n");
	return (0);
}
