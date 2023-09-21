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

	diff = *s1 - *s2;
	return (diff);
}
