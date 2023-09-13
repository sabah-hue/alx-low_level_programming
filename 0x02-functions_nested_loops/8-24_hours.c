#include "main.h"

/**
 * jack_bauer - entry point , no inputs needed
 *
 * Description:  A function that prints every minute of the day
 *
 * Return: no thing
 */
void jack_bauer(void)
{
	int m;
	int s;

	for (m = 00; m <= 23; m++)
	{
		for (s = 00; s <= 59; s++)
		{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar(':');
			_putchar(s / 10 + '0');
			_putchar(s % 10 + '0');
			_putchar('\n');
		}
	}
}
