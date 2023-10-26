#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * Description: A function that sets the value of a bit to 0 at a given index.
 * @n: input parameter
 * @index:  the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	x = sizeof(n) * 8 - 1;
	if (index > x)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
