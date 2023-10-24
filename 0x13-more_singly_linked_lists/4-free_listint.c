#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 *
 * Description: A function that  frees a listint_t list.
 * @head: pointer to a node
 *
 * Return: nothing
 **/
void free_listint(listint_t *head)
{
	listint_t *removedNode, *node;

	if (head == NULL)
		return;
	removedNode = head;
	while (removedNode->next != NULL)
	{
		node = removedNode->next;
		free(removedNode);
		removedNode = node;
	}
}
