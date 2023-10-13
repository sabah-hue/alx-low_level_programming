#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *printInputChar - print input.
 *
 * Description: a function that prints inputs.
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputChar(char *separator, va_list parameters)
{
	printf("%s%c", separator, va_arg(parameters, int));
}
/**
 * printInputInt - print input.
 *
 * Description: a function that prints inputs.
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputInt(char *separator, va_list parameters)
{
	printf("%s%d", separator, va_arg(parameters, int));
}
/**
 * printInputDouble - print input.
 *
 * Description: a function that prints.
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputDouble(char *separator, va_list parameters)
{
	printf("%s%f", separator, va_arg(parameters, double));
}
/**
 * printInputString - print input.
 *
 * Description: a function that prints.
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputString(char *separator, va_list parameters)
{
	char *s = va_arg(parameters, char *);

	switch ((int)(!s))
	{
		case 1:
			s = "(nil)";
	}
	printf("%s%s", separator, s);
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
	char *separator = "";
	va_list parameters;
	myFormat myFormatChecks[] = {
		{"c", printInputChar},
		{"i", printInputInt},
		{"f", printInputDouble},
		{"s", printInputString},
		{NULL, NULL}
	};

	va_start(parameters, format);
	if (!format)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == myFormatChecks[j].spsifier[0])
			{
				myFormatChecks[j].printIt(separator, parameters);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(parameters);
}
