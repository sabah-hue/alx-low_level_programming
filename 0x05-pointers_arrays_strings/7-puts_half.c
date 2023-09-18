#include "main.h"

/**
 * puts_half - print half of string
 *
 * Description: a function that  print half of string.
 * @str: input string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	for (j = i / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
