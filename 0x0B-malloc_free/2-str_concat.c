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
	int i, j, size, x, z;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	size = i + j;
	a = malloc(size * 2 * sizeof(char) + 1);
	if (a != NULL)
	{
		for (z = 0; z < size; z++)
		{
			x = 0;
			while (s1[x] != '\0')
			{
				a[z] = s1[z];
				x++;
			}
			x = 0;
			while (s2[x] != '\0')
			{
				a[z] = s2[x];
				x++;
			}
		}
	}
	return (a);
}
