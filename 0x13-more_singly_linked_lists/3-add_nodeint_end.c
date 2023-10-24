#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * Description: A function that adds a new node at the end of list.
 * @head: a pointer to head
 * @n: integer
 *
 * Return:  the address of the new element, or NULL if it failed
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *endNode;

	endNode = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->n = n;
	if (endNode != NULL)
	{
		while (endNode->next != NULL)
		{
			endNode = endNode->next;
		}
		endNode->next = newNode;
	}
	else
		*head = newNode;
	newNode->next = NULL;
	return (newNode);	
}
