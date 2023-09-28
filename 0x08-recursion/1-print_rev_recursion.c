#include "main.h"

/**
 * _print_rev_recursion -  prints a string
 *
 * Description: a function that prints a string in reverse.
 * @s: input string
 *
 * Return: no thing.
 */
void _print_rev_recursion(char *s)
{
	if (*s <= 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
