#include "hash_tables.h"

/**
 * key_index - function that generates index of a key.
 * @key: the key
 * @size: size of array of the hash table.
 *
 * Return: index at which key/value is stored in the array table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash_value;

	hash_value  = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
