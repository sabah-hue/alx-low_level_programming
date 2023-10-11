#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * Description: a function that print_name
 * @name: input parameter.
 * @f: pointer to function.
 *
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	if (name && f)
		f(name);
}
