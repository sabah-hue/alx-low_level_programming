#include "main.h"

/**
 * print_sign - entry point, need input
 *
 * Description: a function that prints the sign of a number.
 * @n: the input to check
 *
 * Return: 1 input greater than 0,0 input is 0,-1 input less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(+);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(-);
		return (-1);
	}
	_putchar(0);
	return (0);
}
