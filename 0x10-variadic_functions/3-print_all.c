#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *printInputs - print input.
 *
 * @formatelist: type va_list of the arguments
 *
 * Return: nothing
 **/
void printInputs(const format)
{
	int j = 0;
	char *s, *separator = "";

	while (formate[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%s%c", separator, va_arg(parameters, int);
				break;
			case 'i':
				printf("%s%d", separator, va_arg(parameters, int);
				break;
			case 'f':
				printf("%s%f", separator, va_arg(parameters, double);
				break;
			case 's':
				s = va_arg(parameters, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separators, s);
				break;
			default:
				j++;
				continue;
		}
		separator = ", ";
		j++
	}
}
/**
 * print_all -  prints strings, followed by a new line.
 *
 * Description: a function that prints numbers, followed by a new line.
 * @format: list of types of arguments passed to the function
 *
 * Return: no thing
 **/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list parameters;

	va_start(myinputs, format);
	if (format)
	{
		printInputs(s, format);
	}
	printf("\n");
	va_end(parameters);
}
