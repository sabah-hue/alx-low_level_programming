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
			(char) m;
			(char) s;
			_putchar(m);
			_putchar(':');
			_putchar(s);
			_putchar('\n');
			(int) m;
			(int) s;
		}
	}
}
