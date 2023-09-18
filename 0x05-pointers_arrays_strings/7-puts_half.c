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
	if (i % 2)
	{
		for (j = (i - 1) / 2; j < i - 1; j++)
		{
			_putchar(str[j + 1]);
		}
	}
	else
	{
		for (j = i / 2; j < i - 1; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
