#include "hash_tables.h"

/**
 * hash_table_get - adds an element to the hash table.
 *
 * Description: A function that adds an element to the hash table.
 * @ht: hash table you want to look into
 * @key: key you are looking for
 *
 * Return:  value associated with the element, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
