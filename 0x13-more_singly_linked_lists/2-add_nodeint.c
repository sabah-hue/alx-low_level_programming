#include "lists.h"

/**
 * add_nodeint - returns the number of elements in a linked listint_t list.
 *
 * Description: A function that returns number of elements in a linked list.
 * @head: pointer to the node
 * @n: integer
 *
 * Return:  the number of elements in a linked listint_t list.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	newNode->n = n;
	newNode = *head;
	return (newNode);
}
