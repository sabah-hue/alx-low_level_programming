#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 *
 * Description: A function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: key
 * @value: value associated with the key.
 * Return: index at key/value pair should sort in the array of hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *this;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	this = ht->array[i];
	while (this)
	{
		if (!strcmp(this->key, key))
		{
			free(this->value);
			this->value = strdup(value);
			return (1);
		}
		this = this->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
