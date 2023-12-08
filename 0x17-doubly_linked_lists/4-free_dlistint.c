#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 *
 * Description: A function frees a dlistint_t list.
 * @head: pointer to head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
