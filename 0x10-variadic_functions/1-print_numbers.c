#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 ** print_numbers -  prints numbers, followed by a new line.
 *
 * Description: a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 *
 * Return: no thing
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list myNumbers;

	if (separator == NULL)
	{
		printf("\n");
		return;
	}
	va_start(myNumbers, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(myNumbers, unsigned int);
		if (i < n - 1)
		{
			printf("%u, ", number);
		}
		else
			printf("%u\n", number);
	}
	va_end(myNumbers);
}
