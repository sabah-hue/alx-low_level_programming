#include <stdio.h>

/**
 * main -  entry point.
 *
 * Description: a function print its name followed by newline.
 * @argc: variable store number of command line
 * @argv: array of character
 *
 * Return: 0 in success.
 **/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
