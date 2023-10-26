#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 *
 * Description: A function that prints the binary representation of a number.
 * @n: input parameter.
 *
 * Return: nothing
 **/
void print_binary(unsigned long int n)
{
	int i, c;
	unsigned long int num_shifted;

	c = 0;
	for (i = sizeof(n) * 8; i >= 0; i--)
	{
		num_hifted = n >> i;
		if (num_shifted & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
		{
			_putchar('0');
		}
	}
	if (c == 0)
		_putchar('0');
}
