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
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
