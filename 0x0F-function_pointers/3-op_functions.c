#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * op_add - Add two integer numbers.
 *
 * Description: a function that add two integer numbers.
 * @a: first parameter
 * @b: second parameter
 *
 * Return:  result
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract two integer numbers.
 *
 * Description: a function that subtract two integer numbers.
 * @a: first number
 * @b: second number
 *
 * Return:  result
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two integer numbers.
 *
 * Description: a function that multiply two integer numbers.
 * @a: first number
 * @b: second number
 *
 * Return:  result
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two integer numbers.
 *
 * Description: a function that Divide two integer numbers.
 * @a: first number
 * @b: second number
 *
 * Return:  result
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Divide two integer numbers.
 *
 * Description: a function that Divide two integer numbers.
 * @a: first number
 * @b: second number
 *
 * Return:  result
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
