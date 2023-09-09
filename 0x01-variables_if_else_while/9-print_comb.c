#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print combinations of single-digit numbers
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
