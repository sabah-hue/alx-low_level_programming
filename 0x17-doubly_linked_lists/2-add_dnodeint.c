#include "lists.h"

/**
 * dlistint_len - adds a new node at the beginning of a dlistint_t list.
 *
 * Description: A function that adds a new node at the beginning of a dlistint_t list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	if (*head == NULL)
		return (NULL);
	new_head = malloc(sizeof(dlistint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = *head;
	if (*head)
		(*head)->prev = new_head;
	*head = new_head;
	return (new_head);
}
