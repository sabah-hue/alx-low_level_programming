#include "main.h"
#include <stdio.h>

/**
 * print_rev - reverse a string
 *
 * Description: a function that prints string, reversed.
 * @s: input parameter
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
