#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *printInputChar - print input.
 *
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputChar(char *separator, va_list parameters)
{
	printf("%s%c", separator, va_arg(parameters, int);
}
/**
 * printInputInt - print input.
 *
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
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputDuble(char *separator, va_list parameters)
{
	printf("%s%d", separator, va_arg(parameters, double));
}
/**
 * printInputDouble - print input.
 *
 * @parameters: type va_list of the arguments
 * @separator: separate parameter
 *
 * Return: nothing
 **/
void printInputString(char *separator, va_list parameters)
{
	char *s = va_arg(parameters, char *);

	if (!s)
		s = "(nil)";
	printf("%s%d", separator, s);
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
		{"f", printInputDuble},
		{"s", printInputString}
	};

	va_start(parameters, format);
	while (format && formate[i])
	{
		while (myFormatChecks[j].myFormatCheck)
		{
			if (format[i] == FormatChecks[j].myFormatCheck[0])
			{
				FormatChecks[j].printIt(separator, parameters);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(parameters);
}
