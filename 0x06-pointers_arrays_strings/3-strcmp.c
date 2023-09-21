#include "main.h"

/**
 * _strcmp - compare strings
 *
 * Description: a function that  cpmpare strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 , -15 , 0
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (i > j)
	{
		diff = 15;
	}
	else if (i < j)
	{
		diff = -15;
	}
	else
		diff = 0;
	return (diff);
}
