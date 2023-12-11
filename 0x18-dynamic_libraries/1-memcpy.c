#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * Description: a function that fills memory with a constant byte.
 * @src: memory area
 * @dest: memory area
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
