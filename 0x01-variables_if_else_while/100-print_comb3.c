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
	int s;

	for (i = 48; i < 57; i++)
	{
		for (s = i + 1; s <= 57; s++)
		{
			putchar(i);
			putchar(s);
			if (i != 56 && s != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
