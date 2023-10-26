#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * Description: A function that returns the value of a bit at a given index.
 * @n: input parameter
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (!n || index < 0)
		return (-1);

}
