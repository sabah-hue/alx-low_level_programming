#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int i;
	int result;

	result = 0;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 0; argc > i; i++)
	{
		if (atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)
		{
			result = result + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
