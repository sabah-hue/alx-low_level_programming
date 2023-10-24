#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * Description: A function that returns number of elements in a linked list.
 * @h: pointer to node
 *
 * Return:  the number of elements in a linked listint_t list.
 **/
size_t listint_len(const listint_t *h)
{
	int i;
	listint_t *nextNode;

	if (h == NULL)
		return (0);
	i = 1;
	nextNode = h->next;
	while (nextNode)
	{
		i++;
		nextNode = nextNode->next;
	}
	return (i);
}
