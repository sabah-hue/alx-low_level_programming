#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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


	if (s1 == NULL)
		s1 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n < j)
		j = n;
	a = malloc(sizeof(char) * (i + j + 1));
	if (a == NULL)
		return (NULL);
	for (x = 0; x < i; i++)
	{
		a[x] = s1[x];
	}
	for (z = 0; z < j; j++)
	{
		a[x++] = s2[z];
	}
	a[x++] = '\0';
		return (a);
}
