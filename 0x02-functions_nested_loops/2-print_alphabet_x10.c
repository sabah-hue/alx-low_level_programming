#include "main.h"

/**
 * print_alphabet_x10 - entry point , no inputs needed
 *
 * Description:  A function that print with puts
 *
 * Return: nothing to return
 */
void print_alphabet_x10(void)
{
	int i;
	char x;

	for (i = 0; i < 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
	}
}
