#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 *
 * Description: A function adds a node at the end of a dlistint_t list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *node;

	node = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (node == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (node->next)
			node = node->next;
		new_node->prev = node;
		node->next = new_node;
	}
	return (new_node);
}
