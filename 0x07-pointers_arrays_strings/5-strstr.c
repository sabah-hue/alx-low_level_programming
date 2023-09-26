#include "main.h"

/**
 * _strstr -  locates a substring
 *
 * Description: a function that searches a string for any of a set of bytes.
 * @haystack: input string
 * @needle: substring
 *
 * Return:  a pointer to the beggining of substring,NULL if no substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
