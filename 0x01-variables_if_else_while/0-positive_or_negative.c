#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that check if the number (+ve , -ve , zero)
 *
 * Return: 0 in success case
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
