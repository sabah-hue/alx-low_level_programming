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
	_putchar(n / 1000);
	_putchar(n / 100);
	_putchar(n / 10);
	_putchar(n % 10);
}
