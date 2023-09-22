#include "main.h"

/**
 * rot13- encoding
 *
 * Description: a function that encode a string into 1337.
 * @s: input string
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;
	int j;
	char rootArray[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char changeTo[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == rootArray[j])
			{
				s[i] = changeTo[j];
				break;
			}
		}
	}
	return (s);
}
