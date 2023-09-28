#include "main.h"

/**
 * _pow_recursion - calculate the value of power
 *
 * Description:  A function that returns value of x raised to power of y.
 *@x: input parameter
 *@y: power value
 *
 * Return: value of x power y.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
