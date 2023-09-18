#include "main.h"

/**
 * swap_int - swap value
 *
 * Description: a function that  swap value of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
