#include "main.h"

/**
 * _strcmp - compare strings
 *
 * Description: a function that  cpmpare strings
 * @s1: first string
 * @s2: second string
 *
 * Return: diff
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 && *s1 == *s2)
	{
		++s1;
		++s2;
	}

	diff = *s1 - *s2;
	return (diff);
}
