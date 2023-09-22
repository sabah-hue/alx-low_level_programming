#include "main.h"

/**
 * cap_string - to uppercase string
 *
 * Description: a function that capitalize words.
 * @s: input string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
|| s[i] == '?' || s[i] == '"' || s[i] == '('
|| s[i] == ')' || s[i] == '[' || s[i] == ']'
||  s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
	}
	return (s);
}
