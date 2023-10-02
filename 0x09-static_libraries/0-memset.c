#include "main.h"

/**
 * _memset - encoding
 *
 * Description: a function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
