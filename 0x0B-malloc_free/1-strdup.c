#include <stdio.h>
#include <stdlib.h>
i
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

	for (i = 0; str[i] != '0\'; i++)
	{
	}
	i = i + 1;
	a = malloc(i * sizeofe(str));

	if (str == NULL)
		return ('\0');
	for (i = 0; str[i] != '0\'; i++)
	{
		*(a + i) = dunlicateStr;
	}
	return (a);
}
