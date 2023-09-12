#include "main.h"

/**
 * _isalpha -  entry point,input needed
 *
 * Description: A Function that checks for alphabetic character.
 * @c: the input to checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
