#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print alphabet in lowercase,  except e & q
 *
 * Return: 0 in success case
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		putchar(i);
	}
	putchar('\n');
	return (0);
}
