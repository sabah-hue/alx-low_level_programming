#include <stdlib.h>
#include "main.h"

/**
 * print_name - prints a name.
 *
 * Description: a function that print_name
 * @name: input parameter.
 * @(*f)(char *): pointer to function.
 *
 * Return: Nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
