#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 *
 * Description: A function that prints a hash table.
 * @ht: hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int j = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (j)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			j++;
		}
	}
	printf("}\n");
}
