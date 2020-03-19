#include "lists.h"
#define STRING1 ("You're beat! and yet, you must allow,\n")
#define STRING2 ("I bore my house upon my back!\n")

/**
 * print_first - prints a function before main executes
 *
 **/

void print_first(void)
{
	printf("%s%s", STRING1, STRING2);
}
