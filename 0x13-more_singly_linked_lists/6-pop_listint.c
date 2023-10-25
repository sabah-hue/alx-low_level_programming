#include "lists.h"

/**
 * pop_listint -  Delete the head node of a listint_t linked list.
 *
 * Description: A function that head node of a listint_t linked list.
 * @head: a pointer to a node.
 *
 * Return:  the head node’s data (n), 0 if empty list.
 **/
int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int n;

	if (*head == NULL)
		return (0);
	newHead = *head;
	*head = newHead->next;
	n = newHead->n;
	free(newHead);
	return (n);
}
