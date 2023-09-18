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
	int y;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (y = i - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
