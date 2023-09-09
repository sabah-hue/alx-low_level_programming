#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print digits 0 to 9
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
