#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 *
 * Description: a function that prints the numbers, from 0 to 9
 *
 * Return: no thing.
 */
void print_most_numbers(void)
{
	int i = 48;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
