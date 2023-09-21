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
	int i;
	int swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
