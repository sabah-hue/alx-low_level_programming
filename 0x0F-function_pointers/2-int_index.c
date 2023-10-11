#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 *
 * Description: A function that searches for an integer.
 * @array: input array.
 * @size: array size.
 * @cmp: pointer to function to be used to compare values
 *
 * Return: Index of the first element.
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			break;
	}
	if (i == size)
		return (-1);
	return (i);
}
