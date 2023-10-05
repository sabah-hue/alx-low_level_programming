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
	int i, j, x;
	char *a, *m;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		m = av[i];
		for (x = 0; m[x] != '\0'; x++)
		{
		}
	}
	a = malloc(sizeof(char) * (x + 1));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			a[j] = av[i][j];
		}
		av[i][j] = '\n';
	}
	a[i] = '\0';
	return (a);
}
