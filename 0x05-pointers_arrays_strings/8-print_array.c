#include "main.h"
#include <stdio.h>

/**
 * puts_half - print n elements of an array
 *
 * Description: a function that  print n elements of an array.
 * @a: input array
 * @n: input number of element
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[n - 1]);
}
