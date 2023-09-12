#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 * main - entry point , no inputs needed
 *
 * Description:  A function that print _putchar
 *
 * Return: 0 in success case
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	_putchar('_putchar');
	return (0);
}
