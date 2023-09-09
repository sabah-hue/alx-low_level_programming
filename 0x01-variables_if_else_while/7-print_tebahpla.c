#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print alphabet in lowercase and reversed
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i;

	for (i = 122; i <= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
