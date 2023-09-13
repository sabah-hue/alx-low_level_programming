#include "main.h"

/**
 * times_table - entry point , no inputs needed
 *
 * Description:  A function that prints  the 9 times table, starting with 0.
 *
 * Return: no thing
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			if (i * j < 10)
			{
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
