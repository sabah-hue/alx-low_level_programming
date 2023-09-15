#include "main.h"
#include <stdio.h>

/**
 * main - fizz buzz
 *
 * Description: a function that  print numbers from 1 to 100
 *
 * Return: no thing
 */
void main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz");
		else if (n % 3 != 0 && n % 5 == 0)
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
