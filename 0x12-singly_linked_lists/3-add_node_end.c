#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 *
 * Description: a function that adds a new node at the end of a list_t list.
 * @head: pointer to first node.
 * @str: input string.
 *
 * Return:  the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = *head;

	new = malloc(sizeof(list_t));
	if (head == NULL || new == NULL || str == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	if (tail != NULL)
	{
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}
	else
		*head = new;
	new->next = NULL;
	return (new);
}
