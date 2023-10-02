#include <stdio.h>
#include <stdlib.h>

/**
 * main -  entry point.
 *
 * Description: a function that adds positive numbers.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success, 1 in Error.
 **/
int main(int argc, char *argv[])
{
	int i, result, a;
	char c;

	result = 0;

	if (argc > 0)
	{
		for (i = 0; argc > i; i++)
		{
			c = srgv[i];

			a = atoi(argv[i]);
			if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))))
			{
				result = result + a;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
