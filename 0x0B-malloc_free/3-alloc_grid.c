#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers.
 *
 * Description: a function returns a pointer to a 2 D array..
 * @width: array width
 * @height: array height
 *
 * Return: a pointer to a 2 D array, Null on failuer or -ve dimentions
 **/
int **alloc_grid(int width, int height)
{
	int **twoDarray, i, j;

	if (width < 0 || height < 0 || (width == 0 && height == 0))
		return (NULL);
	twoDarray = malloc(sizeof(int *) * height);
	if (twoDarray == NULL)
	{
		free(twoDarray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		twoDarray[i] = malloc(sizeof(int) * width);
		if (twoDarray[i] != NULL)
		{
			for (j = 0; j < width; j++)
				twoDarray[i][j] = 0;
		}
		else
		{
			for (i--; i >= 0; i--)
			{
				free(twoDarray[i]);
			}
			free(twoDarray);
			return (NULL);
		}
	}
	return (twoDarray);
}
