#include <stdio.h>

/**
 * main - prints the program name stored in argv[0]
 * @argc: number of arguments provided
 * @argv: array of function arguments
 *
 * Return: the program name stored in argv[0]
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
