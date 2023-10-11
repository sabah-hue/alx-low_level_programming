#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints a name.
 *
 * Description: a function that executes a function given
 * as a parameter on each element of an array.
 * @array: input array.
 * @size: array size.
 * @action: pointer to function.
 *
 * Return: Nothing
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL || size <= 0)
		return;
	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
