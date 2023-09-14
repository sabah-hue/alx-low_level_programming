#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * Description: a function that draws a diagonal line on the terminal.
 * @n: number of times
 *
 * Return: no thing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
	}
	_putchar('\n');
}
