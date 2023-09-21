#include "main.h"

/**
 * _strncpy- concat strings
 *
 * Description: a function that  concat strings
 * @dest: first string
 * @src: second string
 * @n: bytes from src
 *
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != 0; j++)
	{
	}
	if (n <= j)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	else
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
		dest[j] = '\0';
	}
	return (dest);
}
