#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments passed to function
 * @argv: array storing all arguments passed to function
 *
 * Return: all arguments passed to function
 */

int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
		for (; i < argc; i++)
			printf("%s\n", argv[i]);
	return (0);
}
