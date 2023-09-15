#include "main.h"
#include <stdio.h>

/**
 * main - calculate prim factor
 *
 * Description: a function that  prints the largest prime factor of the number
 *
 * Return: 0 success
 */
int main(void)
{
	long remain;
	long n = 612852475143;

	if (n % 3 == 0)
	{
		remain = n / 3;
		if (remain % 3 == 0)
			remain = remain / 3;
		else if (remain % 2)
			remain = remain / 2;
	}
	printf("%d", remain);
	printf("\n");
	return (0);
}
