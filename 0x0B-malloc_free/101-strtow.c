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
	char *a;

	if (str == NULL || str == "")
		return (NULL);
	for (i = 0; str != '\0'; i++)
	{
	}
	a = malloc(sizeof(char) * i + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; str != '\0'; i++)
	{
		for (j = 0; str != ' '; j++)
		{
			a[i][0] = str[j];
		}
		a[i++] = '\n';
	}
	return (a);
}
