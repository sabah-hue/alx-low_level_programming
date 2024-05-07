#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 *
 * Description: A function that searches for a value in
 * a sorted array of integers using the Binary search.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, in fail cases return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
