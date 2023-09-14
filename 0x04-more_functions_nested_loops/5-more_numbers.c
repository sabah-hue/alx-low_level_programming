#include "main.h"

/**
 * more_numbers - print 0 to 14
 *
 * Description: a function that prints  10 times the numbers, from 0 to 14
 *
 * Return: no thing.
 */
void more_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 10; i++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10 && i <= 14)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
