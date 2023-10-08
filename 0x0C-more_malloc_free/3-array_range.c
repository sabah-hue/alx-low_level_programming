#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - creates an array of integers.
 *
 * Description: a function that creates an array of integers.
 * @min: min number in array
 * @max: max number in array
 *
 * Return: pointer to the newly created array,
 * return NULL in fails or min > max
 **/
int *array_range(int min, int max)
{
	int i, j;
	int *a;

	j = 0;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
