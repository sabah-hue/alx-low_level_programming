#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print alphabet in lowercase
 *
 * Return: 0 in success case
 */

int main(void)
{
	for (int i = 97 ; i <= 122 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
