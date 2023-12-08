#include "lists.h"

/**
 * sum_dlistint -  returns the sum of all the data (n) of a linked list.
 *
 * Description: A function that returns sum of the data (n) of a linked list.
 * @head: pointer to head node
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list,0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	while (node)
	{
		sum = sum + node->n;
		node = node->next;
	}
	return (sum);
}
