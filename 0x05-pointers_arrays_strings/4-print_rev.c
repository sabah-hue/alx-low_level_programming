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
	int z;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (z = i - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}
	_putchar("\n");
}
