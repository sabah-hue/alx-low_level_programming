#include "main.h"

/**
 * _print_rev_recursion -  get the length of a string
 *
 * Description: a function that  returns the length of a string.
 * @s: input string
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
