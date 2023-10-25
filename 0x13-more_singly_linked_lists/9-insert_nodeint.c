#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 *
 * Description: A function that  inserts a new node at a given position.
 * @idx: index of the list where the new node should be added
 * @n: integer
 * @head: pointer to a node
 *
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *addNode, *node, *tempNode;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = *head;
	addNode = malloc(sizeof(listint_t));
	if (addNode == NULL)
	{
		free(addNode);
		return (NULL);
	}
	addNode->n = n;
	if (idx == 0)
	{
		addNode->next = *head;
		*head = addNode;
	}
	for (i = 0; i < idx; i++)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		if (i == idx - 2)
		{
			tempNode = node->next;
			node->next = addNode;
			addNode->next = tempNode;
		}
	}
	return (addNode);
}
