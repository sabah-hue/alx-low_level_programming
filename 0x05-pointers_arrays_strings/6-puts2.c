#include "main.h"

/**
 * puts2 - print a string
 *
 * Description: a function that  prints every other character of a string
 * @str: input string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
