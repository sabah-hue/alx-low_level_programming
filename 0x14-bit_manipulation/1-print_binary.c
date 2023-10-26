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
	int i;
	int c = 0;

	for (i = sizeof(n) * 4; i >= 0; i--)
	{
		if ((n >> i) & 1)
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
