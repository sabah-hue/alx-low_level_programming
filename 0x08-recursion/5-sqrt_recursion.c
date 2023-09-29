#include "main.h"

/**
 * _sqrt_recursion -  get the square root of a number.
 *
 * Description: a function that  returns the natural square root of a number.
 * @n: input number
 *
 * Return: square root value.
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	if (n == 1)
	{
		return (1);
	}
	if (n <= 0)
	{
		return (-1);
	}
	if ((n % i == 0) && (n / i == i))
	{
		return (i);
	}
	i++;
	return (_sqrt_recursion(n));
}
