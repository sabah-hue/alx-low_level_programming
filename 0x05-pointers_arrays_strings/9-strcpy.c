#include "main.h"

/**
 * _strcpy - copy a string
 *
 * Description: a function that copy astring.
 * @dest: input string
 * @src: input string
 *
 * Return: chara
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
