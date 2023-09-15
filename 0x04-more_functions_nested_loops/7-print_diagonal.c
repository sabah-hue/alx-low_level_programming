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
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
