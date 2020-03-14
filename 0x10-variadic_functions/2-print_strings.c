#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char *args;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		args = va_arg(arguments, char *);

		if (args == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", args);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arguments);
}
