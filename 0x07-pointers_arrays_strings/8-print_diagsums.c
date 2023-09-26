#include "main.h"

/**
 * print_diagsums -   print sum of the two diagonals.
 *
 * Description: a function prints sum of two diagonals of a square matrix.
 * @a: input parameter
 * @size: size of the square matrix
 *
 * Return:  nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		sum2 = sum2 + a[size - 1 - i];
		a = a + size;
	}
	printf("%d %d\n", sum1, sum2);
}
