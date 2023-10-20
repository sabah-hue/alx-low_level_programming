#include "lists.h"
/**
 * free_list -  frees a list_t list.
 *
 * Description: a function that frees a list_t list.
 * @head: pointer to first node in list.
 *
 * Return:  nothing
 **/
void free_list(list_t *head)
{
	list_t *node_removed, *node_temp;

	if (head == NULL)
		return;
	node_removed = head;
	while (node_removed != NULL)
	{
		node_temp = node_removed->next;
		free(node_removed->str);
		free(node_removed);
		node_removed = node_temp;
	}
}
