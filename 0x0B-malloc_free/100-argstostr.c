#include <stdlib.h>
/**
 * argstostr - frees a 2 dimensional grid.
 *
 * Description: a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @ac: size of av
 * @av: input array
 *
 * Return: a pointer to a new string, or NULL if it fails.
 **/
char *argstostr(int ac, char **av)
{
	int i, j;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = malloc(sizeof(char) * ac + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[j] != '\0'; j++)
		{
			a[j] = av[i][j];
		}
		av[i] = '\n';
	}
	a[i] = '\0';
	return (a);
}
