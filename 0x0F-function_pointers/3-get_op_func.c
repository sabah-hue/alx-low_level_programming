#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * get_op_func - selects the correct function to perform the entered operation.
 *
 * Description: a function that  selects the correct function to
 * perform the operation asked by the user.
 * @s: operator as argument to the program
 *
 * Return:  a pointer to the function, or
 *  NULL if s not match one of the allowed operations.
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 6)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}
	return (ops->f[i]);
}
