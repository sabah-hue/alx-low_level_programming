#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * main - Entry point.
 *
 * Description: a function that make arithamstic
 * operation on two integer numbers.
 *
 * Return: 0 in success.
 **/
int main(int argc, char *argv)
{
	int num1, num2, calc;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	calc = (*get_op_func(argv[2]))(num1, num2);
	printf("%d", calc);
	return (0);
}
