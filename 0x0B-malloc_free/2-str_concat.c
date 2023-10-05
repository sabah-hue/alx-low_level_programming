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
	int i, j, z, size;

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
		for (z = 0; z < size; z++)
		{
			if (i < z)
				a[z] = s1[z];
			else
				a[z] = s2[z - i];
		}
		a[z] = '\0';
	}
	return (a);
}
