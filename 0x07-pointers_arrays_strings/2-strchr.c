#include "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * Description: a function that  locates a character in a string.
 * @s: input string
 * @c: character
 *
 * Return: a pointer to first char found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
