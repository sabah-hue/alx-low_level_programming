#include "lists.h"

/**
 * dlistint_len - Get the number of elements in a linked dlistint_t list.
 *
 * Description: A function that gets number of elements in a linked list.
 * @h: pointer to head node
 *
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h->next)
	{
		i++;
		h = h->next;
	}
	return (i);
}
