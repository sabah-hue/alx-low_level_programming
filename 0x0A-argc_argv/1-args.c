#include <stdio.h>

/**
 * main -  entry point.
 *
 * Description: a function  prints the number of arguments passed into it.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success.
 **/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
