#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - Entry point.
 *
 * Description: a function that prints the opcodes of its own main function.
 * @argc: count
 * @argv: array of data
 *
 * Return: 0 in success.
 **/
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	i = 0;
	while (i < argc)
	{
		printf("%02hhx", opcode[i]);
		if (i != number_of_bytes - 1)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
