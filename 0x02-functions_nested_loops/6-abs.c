#include "main.h"

/**
 * _abs - entry point , input needed
 *
 * Description:  A function computes the absolute value of an integer.
 *@x: input to get his abs
 *
 * Return: 0 in success case
 */
int _abs(int x)
{
	if (x >= 0)
	{
		_putchar('x');
		return (0);
	}
	x = x * -1;
	_putchar('x');
	return (0);
}

