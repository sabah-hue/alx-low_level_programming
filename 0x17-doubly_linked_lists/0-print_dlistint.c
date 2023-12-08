#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list.
 *
 * Description: A function that  prints all the elements of a dlistint_t list.
 * @h: pointer to head node.
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t i;

	i = 0;

	if (h == NULL)
		return (0);
	while (node->next)
	{
		printf("%d\n", node->n);
		i++;
		node = node->next;
	}
	return (i);
}
