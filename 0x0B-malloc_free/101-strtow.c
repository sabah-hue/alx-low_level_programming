#include <stdlib.h>

/**
 * strtow - splits a string into words.
 *
 * Description: a function that  that splits a string into words.
 * @str: input array.
 *
 * Return: a pointer to array, or NULL if str == NULL or str == "".
 **/
char **strtow(char *str)
{
	int i, j;
	char **a;

	if (str == NULL || *str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = malloc(sizeof(char*) * sizeof(char *) * (i + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != ' '; j++)
		{
			a[i][0] = str[j];
		}
	}
	return (a);
}
