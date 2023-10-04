#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory.
 *
 * Description: a function returns a pointer to a newly allocated space
 * in memory,which contains a copy of the string given as a parameter.
 * @str: input string
 *
 * Return: a pointer to newly allocated in memory or NULL if str = NULL.
 **/
char *_strdup(char *str)
{
	char *a;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = malloc(i * sizeof(*str) + 1);
	if (a != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			*(a + i) = str[i];
		}
	}
	return (a);
}
