#include "main.h"

/**
 * print_to_98 - entry point
 *
 * Description:  A function that all natural numbers from n to 98
 *@n: input parameter
 *
 * Return: no thing
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = n; i == 98; i++)
		{
			_putchar(i + '0');
		}
	}
	else
	{
		for (i = n; i == 98; i--)
		{
			_putchar(i + '0');
		}
	}
}
