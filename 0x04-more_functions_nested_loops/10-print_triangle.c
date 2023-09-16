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
	int unHash;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			unHash = size - i;
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			for (y = unHash; y > 1; y--)
			{
				_putchar(32);
			}
			_putchar('\n');
		}
	}
}
