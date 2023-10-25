#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 *
 * Description: A function that deletes the node at index index of a listint_t
 * @head: pointer to a node
 * @index:  index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleteNode, *node;
	unsigned int i;

	if (head == NULL)
		return (-1);
	node = *head;
	if (index == 0 || !index)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			deleteNode->next = node->next;
			free(node);
			return (1);
		}
		deleteNode = node;
		node = node->next;
	}
	return (-1);
}
