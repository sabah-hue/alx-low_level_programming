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
	int i;
	int j;

	for (j = 0; j < n && src[j] != 0 ; j++)
	{
		dest[j] = src[j];
	}
	for (i = j; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
