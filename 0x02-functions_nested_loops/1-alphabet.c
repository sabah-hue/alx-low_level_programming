#include "main.h"

/**
 * print_alphabet - entry point , no inputs needed
 *
 * Description:  A function that print alphabet
 *
 * Return: nothing return
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
