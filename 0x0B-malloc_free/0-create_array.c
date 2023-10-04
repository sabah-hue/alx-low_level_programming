#include <main.h>
/**
 * create_array - create an array of characters
 *
 * Description: A function that creates an array of chars, and initializes it with a specific char.
 * @size: size of the memory to print
 * @c: input parameter
 *
 * Return: a pointer to the array, or NULL if it fails
 **/

char *create_array(unsigned int size, char c)
{
	char *a;
	
	if (size == 0)
		return ('\0');
	else
	{
		a = malloc(size * sizeof(c));

	}
	return (a);
}
