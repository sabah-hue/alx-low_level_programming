#include "main.h"

/**
 * _islower - entry point , need input
 *
 * Description:  A function that checks for lowercase character.
 *@c: The checked input
 *
 * Return: 1 incase the input in lowercase , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
