#include "hash_tables.h"

/**
 * hash_table_set - asfsa
 * @key: saf
 * @ht: safa
 * @value: asda
 * Return: asfa
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	char *dup_value, *dup_key;
	unsigned long int index;

	if (!*key || !key || !ht || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			dup_value = strdup(value);
			if (!dup_value)
				return (0);
			free(tmp->value);
			tmp->value = dup_value;
			return (1);
		}
		tmp = tmp->next;
	}

	dup_key = strdup(key);
	dup_value = strdup(value);
	if (!dup_key || !dup_value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = dup_key;
	new_node->value = dup_value;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
