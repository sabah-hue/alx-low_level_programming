#include "hash_tables.h"

/**
 * hash_table_create - create hash table
 *
 * Description: A function that creat hash table
 * @size: pointer to head node
 *
 * Return: pointer to the newly created hash table, NULL if some thing wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *my_table;
	unsigned int i = 0;

	if (size < 1)
		return (NULL);
	my_table = malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);
	my_table->size = size;
	my_table->array = malloc(sizeof(hash_node_t) * size);
	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}
	while (i < size)
	{
		my_table->array[i] = NULL;
		i++;
	}
	return (my_table);
}
