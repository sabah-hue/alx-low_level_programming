#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked -  allocates memory using malloc.
 *
 * Description: a function that allocates memory using malloc.
 * @b: input array
 *
 * Return: pointer to allocated memory,
 * in fail terminate with a status value of 98
 **/
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(sizeof(unsigned int) * b);
	if (a != NULL)
		return (a);
	exit(98);
}
