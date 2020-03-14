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

	args = va_arg(arguments, char *);

	if (args != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (separator == NULL && i < n - 1)
			{
				printf("%s", args);
				args = va_arg(arguments, char *);
			}
			else if (i == n - 1)
				printf("%s", args);
			else if (strcmp(args, "\0") == 0)
			{
				printf("(nil)%s", separator);
				args = va_arg(arguments, char *);
			}
			else if (separator != NULL)
			{
				printf("%s%s", args, separator);
				args = va_arg(arguments, char *);
			}
		}
	}
	putchar('\n');
	va_end(arguments);
}
