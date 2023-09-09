#include <stdio.h>
/**
 * main - entry point , no inputs needed
 *
 * Description:  A function that print alphabet in uppercase and lowercase
 *
 * Return: 0 in success case
 */

int main(void)
{
	int u;

	for (u = 97; u <= 122; u++)
	{
		putchar(u);
	}
	for (u = 65; u <= 90; u++)
	{
		putchar(u);
	}
	putchar('\n');
	return (0);
}
