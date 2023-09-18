#include "main.h"

/**
 * print_rev - reverse a string
 *
 * Description: a function that prints string, reversed.
 * @s: input parameter
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
