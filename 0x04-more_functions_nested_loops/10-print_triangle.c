#include "main.h"

/**
 * print_triangle - print triangle
 *
 * Description: a function that  print triangle, followed by a new line.
 * @size: triangle size
 *
 * Return: no thing
 */
void print_triangle(int size)
{
	int i;
	int j;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (y = 0; y <= i; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
