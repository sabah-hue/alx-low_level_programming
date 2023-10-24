#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * Description: A function that  prints all the elements of a listint_t list.
 * @h: a pointer to first node
 *
 * Return: The number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	int i;
	listint_t *nextNode;

	if (h == NULL)
		return (0);
	i = 1;
	printf("%d\n", h->n);
	nextNode = h->next;
	while (nextNode != NULL)
	{
		printf("%d\n", nextNode->n);
		nextNode = nextNode->next;
		i++;
	}
	return (i);
}
