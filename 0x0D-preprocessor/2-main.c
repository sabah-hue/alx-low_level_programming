#include <stdio.h>

/**
 * main - entry point. 
 *
 * Description: a function that prints the name of the file it was compiled from, followed by a new line.
 *
 * Return: pointer to the newly created array, return NULL in fails or min > max
 **/
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
