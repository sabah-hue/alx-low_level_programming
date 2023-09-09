#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print numbers of base 16
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
