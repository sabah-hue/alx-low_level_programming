#include "lists.h"

/**
 * add_node -  adds a new node at the beginning of a list_t list.
 *
 * Description: a function that adds a new node at the beginning of list.
 * @head: pointer to first node.
 * @str: string input.
 *
 * Return: the address of the new element, or NULL if it failed.
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (head == NULL || new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
