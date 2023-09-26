#include "main.h"

/**
 * set_string -   sets the value of a pointer to a char.
 *
 * Description: a function that sets the value of a pointer to a char.
 * @s: pointer
 * @to: input char
 *
 * Return:  nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
