#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: amount of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(arguments, int));
		else if (separator != NULL && i != n - 1)
			printf("%d%s", va_arg(arguments, int), separator);
	}
	putchar('\n');
}
