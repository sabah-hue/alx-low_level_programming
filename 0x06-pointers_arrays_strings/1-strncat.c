#include "main.h"

/**
 * _strncat - concat strings
 *
 * Description: a function that  concat strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++)
	{
	}
	if (n <= j)
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; src[j] != 0; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	return (dest);
}
