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

	result = 0;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			a = atoi(argv[i]);
			if (a < 48 || a > 57)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
			result = result + a;
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
