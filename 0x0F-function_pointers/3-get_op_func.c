#include "calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: string containing function operator
 * Return: pointer to function that corresponds to operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
