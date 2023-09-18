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
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i = i - 1;
	for (j = 0; i <= j; j++)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
