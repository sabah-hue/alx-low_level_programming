#include "main.h"

/**
 * _puts_recursion -  prints a string
 *
 * Description: a function that prints a string, followed by a new line.
 * @s: input string
 *
 * Return: no thing.
 */
void _puts_recursion(char *s)
{
	int x;

	x = 0;
	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	x++;
	_puts_recursion(s + x);
}
