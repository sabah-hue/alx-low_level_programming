#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <main.h>

/**
 * _calloc -  allocate memory for an array.
 *
 * Description: a function that concatenates two strings.
 * @nmemb: elements of  array
 * @size: size bytes for each element
 *
 * Return: pointer to the allocated memory,
 * in fail or nmemb or size is 0 return null
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		a[i] = 0;
	}
	return (a);
}
