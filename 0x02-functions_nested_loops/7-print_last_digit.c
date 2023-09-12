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

	last_digit = n % 10;
	return (last_digit);
}
