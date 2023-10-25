#include "lists.h"

/**
 * get_nodeint_at_index -  returns nth node of a listint_t.
 *
 * Description: A function that returns nth node of a listint_t.
 * @head: pointer to node
 * @index: index of the node, starting at 0
 *
 * Return: nth node of a listint_t, if node does not exist, return NULL
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *myNode;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	myNode = head;
	if (index == 0)
		return (myNode);
	for (i = 0; i != index; i++)
	{
		myNode = myNode->next;
		if (myNode == NULL)
			return (NULL);
	}
	return (myNode);
}
