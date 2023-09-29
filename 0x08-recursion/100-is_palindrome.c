#include "main.h"

/**
 * new_is_palindrome -  check a string is a palindrome.
 *
 * Description: a function return 1 if a string is a palindrome and 0 if not.
 * @s: input string
 * @x: length of string
 * @i: counter
 *
 * Return: 1 if a string a palindrome and 0 if not.
 */
int new_is_palindrome(char *s, int x, int i)
{
	if (i <= (x / 2))
	{
		if (s[x] == s[i])
		new_is_palindrome(s, x--, i++);
	}
	else
	{
		return (0);
	}
	return (1);
}
/**
 * _strlen_recursion -  get the length of a string
 *
 * Description: a function that  returns the length of a string.
 * @s: input string
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
/**
 * is_palindrome -  check a string is a palindrome.
 *
 * Description: a function return 1 if a string is a palindrome and 0 if not.
 * @s: input string
 *
 * Return: 1 if a string a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int x;

	x = _strlen_recursion(s);
	return (new_is_palindrome(s, x, 0));
}
