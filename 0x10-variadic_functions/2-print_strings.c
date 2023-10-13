#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings -  prints strings, followed by a new line.
 *
 * Description: a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: no thing 
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char * string;
	va_list myString;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(myString, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(myString, char *);
		if (i < n - 1) 
		{
			if (separator)
			{
				if (string)
					printf("%s%s", string, separator);
				else
					printf("%s%s", "(nil)", separator);
			}
			else
			{
				printf("%s", string ? string : "(nil)");
			}
		}
		else
			 printf("%s\n", string ? string : "(nil)");
	}
	va_end(myString);
}
