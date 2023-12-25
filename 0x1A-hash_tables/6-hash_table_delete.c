#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 *
 * Description: A function that deletes a hash table.
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *next;

	if (ht == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			next = node;
			node = node->next;
			free(next->value);
			free(next->key);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}
