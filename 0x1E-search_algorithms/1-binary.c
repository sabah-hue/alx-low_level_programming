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
	size_t low = 0, i;
	size_t high = size - 1;
	int mid;
	
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return mid;
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
