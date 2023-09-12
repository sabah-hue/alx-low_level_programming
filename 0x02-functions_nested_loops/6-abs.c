#include "main.h"

/**
 * _abs - entry point , input needed
 *
 * Description:  A function computes the absolute value of an integer.
 *@n: input to get his abs
 *
 * Return: 0 in success case
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	n = n * -1;
	return (n);
}

