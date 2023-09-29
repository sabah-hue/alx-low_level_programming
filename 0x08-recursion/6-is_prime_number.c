#include "main.h"

/**
 * new_is_prime_number -  get the square root of a number.
 *
 * Description: a function that returns 1 number is a prime ,otherwise 0.
 * @n: input number
 * @i: input parameter
 *
 * Return: 1 if a prime number, otherwise 0.
 */
int new_is_prime_number(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	i++;
	new_is_prime_number(n, i);
}
/**
 * is_prime_number -  get the square root of a number.
 *
 * Description: a function that returns 1 number is a prime ,otherwise 0.
 * @n: input number
 *
 * Return: 1 if a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	return (new_is_prime_number(n, 2));
}
