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
	
	i = 0;
	while (i < n / 2)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
		i++;
	}
}
