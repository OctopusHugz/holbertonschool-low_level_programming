#include "function_pointers.h"

/**
 * print_name - prints a name as is or in uppercase
 * @name: name to print
 * @f: pointer to function to call
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		name = "";
	f(name);
}
