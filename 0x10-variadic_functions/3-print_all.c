#include "variadic_functions.h"

/**
 * print_all - prints anything passed to it (of 4 given types)
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list arguments;
	int i, j;
	char *sep = "";
	specifiers specs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(arguments, format);

	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (specs[j].string != NULL)
		{
			if (format[i] == *(specs[j]).string)
			{
				printf("%s", sep);
				specs[j].f(arguments);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arguments);
}

/**
 * print_char - prints a char
 * @arguments: char to print from va_list
 */

void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_int - prints an integer
 * @arguments: integer to print from va_list
 */

void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_float - prints a float
 * @arguments: float to print from va_list
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}

/**
 * print_string - prints a string
 * @arguments: string to print from va_list
 */

void print_string(va_list arguments)
{
	char *string = va_arg(arguments, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
