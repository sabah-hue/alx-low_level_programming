#include "main.h"

/**
 * factorial -  get the factorial of a given number.
 *
 * Description: a function that returns the factorial of a given number.
 * @n: input number
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
