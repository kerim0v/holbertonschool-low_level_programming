#include "hash_tables.h"

/**
 * key_index - safs
 * @key: asd
 * @size: asdf
 * Return: ikk
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index);
}
