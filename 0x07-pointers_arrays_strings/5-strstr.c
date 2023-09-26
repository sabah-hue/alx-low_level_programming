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
	int j;

	if (*needle == 0)
		return (haystack);
	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[j] != '\0')
		{
			if (needle[0] == haystack[j])
			{
				return (&haystack[j]);
			}
		}
	}
	return ('\0');
}
