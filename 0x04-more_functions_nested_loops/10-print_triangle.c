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

	if (size >= 0)
	{
		for (i = 1; i <= size; i++)
		{
			unHash = size - i - 1;
			for (j = 1; j <= size; j++)
			{
				if (j < unHash)
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
