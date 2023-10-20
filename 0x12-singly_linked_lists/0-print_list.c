#include "lists.h"
#include <string.h>

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * Description: a function that prints all the elements of a list_t list.
 * @h: head pointer
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int str_len = 0, i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			str_len = strlen(h->str);
			printf("[%d] %s\n", str_len, h->str);
		}
		h = h->next;

	}
	return (i);
}
