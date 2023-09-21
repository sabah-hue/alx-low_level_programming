#include "main.h"

/**
 * reverse_array - compare strings
 *
 * Description: a function that  reverses the content of an array of integers.
 * @a: array
 * @n: elements of the array
 *
 * Return: no thing
 */
void reverse_array(int *a, int n)
{
	while (i < n)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", a[n - i - 1]);
		i++;
	}
	_putchar('\n');
}
