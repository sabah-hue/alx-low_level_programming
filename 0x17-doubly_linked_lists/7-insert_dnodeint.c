#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 *
 * Description: A function that  inserts a new node at a given position.
 * @h: pointer to head node
 * @idx: index  where the new node should be added. Index starts at 0
 * @n: integer
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
	node = *h;
	for (i = 1; node != NULL && i < idx; i++)
	{
		node = node->next;
	}
	if (node == NULL && i == idx)
		return (add_dnodeint_end(h, n));
	if (node)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = node;
		new_node->prev = node->prev;
		if (node->prev)
			node->prev->next = new_node;
		node->prev = new_node;
		return (new_node);
	}
	return (NULL);
}
