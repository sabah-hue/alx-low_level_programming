#include "main.h"

/**
 * print_last_digit - entry point , inputs needed
 *
 * Description:  A function that prints the last digit of a number.
 *@n: parameter want to get last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n >= 10)
	{
		last_digit = n % 10;
	}
	else if (n >= 0 && n < 10)
	{
		last_digit = n;
	}
	else
	{
		last_digit = (n % 10) * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
