#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Description: A function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	int endian;
	char *z;

	endian = 1;
	z = (char *)&endian;
	if (z == NULL)
		return (-1);
	return (*z);
}
