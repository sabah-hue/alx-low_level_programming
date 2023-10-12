#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters.
 *
 * Description: a function that returns the sum of all its parameters.
 * @n: input parameter
 *
 * Return: sum of all input parameters, 0 if no parameters.
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list myNumbers;

	sum = 0;
	if (n == 0)
		return (0);
	va_start(myNumbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(myNumbers, unsigned int);
	}
	va_end(myNumbers);
	return (sum);
}

