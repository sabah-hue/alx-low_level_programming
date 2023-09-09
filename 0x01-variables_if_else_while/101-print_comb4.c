#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print combinations of digit numbers
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i, s, x;

	for (i = 48 ; i < 56 ; i++)
	{
		for (x = i + 1; x < 57; x++)
		{
			for (s = x + 1; s <= 57; s++)
			{
				putchar(i);
				putchar(x);
				putchar(s);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
