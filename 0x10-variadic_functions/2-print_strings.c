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

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%s", va_arg(arguments, char *));
		else if (separator != NULL)
			printf("%s%s", va_arg(arguments, char *), separator);
		else if (va_arg(arguments, char *) == NULL)
		  printf("(nil)%s", separator);
	}
	putchar('\n');
	va_end(arguments);
}
