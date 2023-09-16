#include <math.h>
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
	long i;
	long factor;
	long n = 612852475143;
	double z = sqrt(n);

	for (i = 1; i <= z; i++)
	{
		if (n % i == 0)
			factor = n / i;
	}
	printf("%ld\n", factor);
	return (0);
}
