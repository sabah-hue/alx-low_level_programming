#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list.
 *
 * Description: A function that  returns the nth node of a linked list.
 * @head: pointer to head node
 * @index: the index of the node, starting from 0
 *
 * Return: nth node of a dlistint_t linked list, NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = head;
	for (i = 0; node != NULL; i++)
	{
		if (index == i)
			return (node);
		node = node->next;
	}
	return (NULL);
}
