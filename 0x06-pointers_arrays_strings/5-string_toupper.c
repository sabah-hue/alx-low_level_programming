#include "main.h"

/**
 * string_toupper - to uppercase string
 *
 * Description: a function that change lowercase to uppercase.
 * @sLower: input string
 *
 * Return: string
 */
char *string_toupper(char *sLower)
{
	int i = 0;

	for (i = 0; sLower[i] != '\0'; i++)
	{
		if (sLower[i] >= 'a' && sLower[i] <= 'z')
		{
			sLower[i] = sLower[i] - 32;
		}
	}
	return (sLower);
}
