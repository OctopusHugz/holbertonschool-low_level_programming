#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct specifiers - struct specifiers
 *
 * @string: The string
 * @f: The function associated
 */

typedef struct specifiers
{
	char *string;
	void (*f)();

} specifiers;

void print_char(va_list arguments);

void print_int(va_list arguments);

void print_float(va_list arguments);

void print_string(va_list arguments);

#endif /* VARIADIC_FUNCTIONS_H */
