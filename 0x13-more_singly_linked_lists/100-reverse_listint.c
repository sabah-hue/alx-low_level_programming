#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 *
 * Description: A function that  reverses a listint_t linked list.
 * @head: pointer to node
 *
 * Return: pointer to the first node of the reversed list
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *revNode, *node;

	if (head == NULL)
		return (NULL);
	revNode = *head;
	*head = NULL;
	while (revNode)
	{
		node = revNode->next;
		revNode->next = *head;
		*head = revNode;
		revNode = node;
	}
	return (*head);
}
