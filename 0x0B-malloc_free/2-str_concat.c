#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 *
 * Description: a function returns concatenates two strings.
 * @s1: input string
 * @s2: input string
 *
 * Return: a pointer to a newly allocated space in memory or NULL in failure.
 **/
char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, x, size;

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
		}
	}
	size = i + j;
	a = malloc(sizeof(char) * size + 1);
	if (a != NULL)
	{
		for (x = 0; x < i; x++)
		{
			a[i] = s1[i];
		}
		for (x = 0; x < j; x++, i++)
		{
			a[i] = s2[x];
		}
		a[i] = '\0';
	}
	return (a);
}
