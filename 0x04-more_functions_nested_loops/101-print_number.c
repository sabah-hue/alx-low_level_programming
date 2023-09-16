#include "main.h"

/**
 * print_number - calculate prim factor
 *
 * Description: a function that  print number
 * @n: input parameter
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0);
	{
		_putchar('-');
	}
	if (n <= 9)
	{
		_putchar(n % 10 + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
