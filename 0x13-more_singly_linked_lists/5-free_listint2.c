#include "lists.h"

/**
 * listint_t -  frees a listint_t list.
 *
 * Description: A function that sets the head to NULL.
 * @head: pointer to a node
 *
 * Return: nothing
 **/
void free_listint2(listint_t **head)
{
	listint_t *node, *removeNode;

	if (head == NULL)
		return;
	removeNode = *head;
	while (removeNode != NULL)
	{
		node = removeNode->next;
		free(removeNode);
		removeNode = node;
	}
}
