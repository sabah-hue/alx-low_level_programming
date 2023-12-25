#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 *
 * Description: A function that creat hash table
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair stored in array of hash table
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	if (key == NULL || size <= 0)
		return (0);
	i = (hash_djb2(key) % size);
	return (i);
}
