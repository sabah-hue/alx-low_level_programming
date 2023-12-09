#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index of  linked list.
 *
 * Description: A function that deletes the node at index of  linked list.
 * @head: pointer to head node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;
	unsigned int i = 0;

	del_node = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = del_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(del_node);
		return (1);
	}
	while (i < index)
	{
		del_node = del_node->next;
		i++;
	}
	if (del_node)
	{
		if (del_node->prev != NULL)
			del_node->prev->next = del_node->next;
		if (del_node->next != NULL)
			del_node->next->prev = del_node->prev;
		free(del_node);
		return (1);
	}
	return (-1);
}
