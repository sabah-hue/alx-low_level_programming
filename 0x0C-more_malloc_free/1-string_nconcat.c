#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _strnlen -  get the string length.
 *
 * Description: a function that returns string length.
 * @s: input string
 *
 * Return: strnlen.
 **/
int _strnlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * string_nconcat - concatenates two strings.
 *
 * Description: a function that concatenates two strings.
 * @s1: input string
 * @s2: input string
 * @n: first n bytes of s2
 *
 * Return: pointer to allocated space in memory,
 * contains s1, followed by n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, x, z;

	z = 0;

	if (s1 != NULL)
		i = _strnlen(s1);
	else
	{
		i = _strnlen("");
	}
	if (s2 != NULL)
	{
		j = _strnlen(s2);
		if (n < j)
			j = n;
	}
	else
	{
		j = _strnlen("");
	}
	a = malloc(sizeof(char) * (i + j + 1));
	for (x = 0; x < i + j + 1; x++)
	{
		if (x < i)
			a[x] = s1[x];
		if (x >= i)
		{
			a[x] = s2[z];
			z++;
		}
	}
		if (a != NULL)
			return (a);
		return (NULL);
}
