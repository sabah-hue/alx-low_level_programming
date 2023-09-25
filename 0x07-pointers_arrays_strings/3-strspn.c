#include "main.h"

/**
 * _strspn -  get length of a prefix
 *
 * Description: a function that gets the length of a prefix substring.
 * @s: input string
 * @accept: substring
 *
 * Return: length in bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	count = 0;
	for (j = 0; s[j] != '\0' && s[j] != ' '; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[j])
			{
				count++;
			}
		}
	}
	return (count);
}
