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
		return (NULL);
	addNode->n = n;
	if (idx == 0)
	{
		addNode->next = node;
		node = addNode;
		return (addNode);
	}
	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
		{
			tempNode = node->next;
			node->next = addNode;
			addNode->next = tempNode;
		}
		node = node->next;
	}
	return (addNode);
}
