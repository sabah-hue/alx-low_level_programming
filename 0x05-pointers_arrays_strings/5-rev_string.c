#include "main.h"

/**
 * rev_string - reverse a string
 *
 * Description: a function that reverse a string.
 * @s: input string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	i = i - 1;
	for (j = 0; j < i / 2 ; j++)
	{
		x = s[j];
		s[j] = s[i];
		s[i] = x;
		i--;
	}
}
