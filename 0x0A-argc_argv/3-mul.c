#include <stdio.h>

/**
 * main -  entry point.
 *
 * Description: a function that multiplies two numbers.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success.
 **/
int main(int argc, char *argv[])
{
	int result, a, b;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = argc[1];
		b = argc[2];
		result = a * b;
		printf("%d\n", result);
	}
	return (0);

}
