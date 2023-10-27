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
	unsigned int x, bits = 1, i;

	x = sizeof(n) * 8 - 1;
	for (i = 0; i < x; i++)
	{
		n >>= 1;
		m >>= 1;
		if (n || m)
		{
			if ((n & 1) != (m & 1))
				bits++;
		}
	}
	return (bits);
}
