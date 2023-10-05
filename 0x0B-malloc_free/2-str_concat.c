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
	int i, j, z;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	a = malloc((i + j) * sizeof(char) + 1);
	if (a != NULL)
	{
		if (s1 == NULL)
			s1 = '\0';
		if (s2 == NULL)
			s2 = '\0';
		if (s1 == NULL && s2 == NULL)
			a = '\0';
		for (z = 0; z < (i + j); z++)
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
