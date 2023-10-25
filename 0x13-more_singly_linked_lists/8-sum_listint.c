#include "lists.h"

/**
 * sum_listint - returns  the sum of all data (n) of a listint_t.
 *
 * Description: A function that returns the sum of all data (n) of a listint_t.
 * @head: pointer to node.
 *
 * Return: sum of all data, if list is empty, return 0
 **/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	while (node->next != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	sum += node->n;
	return (sum);
}
