#include "main.h"

/**
 * new_sqrt_recursion -  get the square root of a number.
 *
 * Description: a function that  returns the natural square root of a number.
 * @n: input number
 * @i: input parameter
 *
 * Return: square root value.
 */
int new_sqrt_recursion(int n, int i)
{
	if (n <= 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	i++;
	return (new_sqrt_recursion(n, i));
}
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
	return (new_sqrt_recursion(n, 0));
}
