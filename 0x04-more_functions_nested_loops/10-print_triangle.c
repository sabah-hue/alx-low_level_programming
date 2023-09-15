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

	if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
