#include "main.h"

/**
 * flip_bits - returns number of bits needed to flip to
 * get from one number to another.
 *
 * Description: A function that returns number of bits
 * needed to flip to get from one number to another.
 * @n: input parameter
 * @m: input parameter
 *
 * Return:  number of bits needed to flip to get from one number to another.
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x, bits = 0, i;
	unsigned long int result;

	x = sizeof(n) * 8 - 1;
	result = n ^ m;
	for (i = 0; i < x; i++)
	{
		if ((n ^ m) & 1)
			bits++;
		result = result >> 1;
	}
	return (bits);
}
