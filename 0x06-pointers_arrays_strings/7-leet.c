#include "main.h"

/**
 * leet - encoding
 *
 * Description: a function that encode a string into 1337.
 * @s: input string
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	int i, j;
	char leetArray[11] = {'a', 'A', 'e', 'E', '0', 'O', 't', 'T', 'l', 'L'};
	char changeTo[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leetArray[j])
			{
				s[i] = changeTo[j];
			}
		}
	}
	return (s);
}
