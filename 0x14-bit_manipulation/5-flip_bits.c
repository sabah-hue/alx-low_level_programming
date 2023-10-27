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
	unsigned long int new_value;

	x = sizeof(n) * 8 - 1;
	if (n || m)
	{
		new_value = n ^ m;
	}
	for (i = 0; i < x; i++)
	{
		if ((new_value & 1) == 1)
			bits++;
		new_value = new_value >> 1;
	}
	return (bits);
}
