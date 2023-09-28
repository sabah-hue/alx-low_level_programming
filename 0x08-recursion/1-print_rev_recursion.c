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
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	if (x < 0)
	{
		return;
	}
	_putchar(s[x]);
	x--;
	_print_rev_recursion(s + x);
}
