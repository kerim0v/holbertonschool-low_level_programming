#include "hash_tables.h"

/**
 * hash_table_print - saff
 * @ht: asf
 * Return: asf
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
	{
		return;
	}

	printg("{");
	for (i = 0; i < ht->size; i)
	{
		node = ht->array[i];
		while (!node)
		{
			printf("'%s' : '%s'", node->key, node->value);
			node = node->next;
			if (!node)
			{
				printf(", ");
			}
			else if (i < ht->size - 1)
			{
				unsigned long int j = i + 1;

				while (j < ht->size && ht->array[j] == NULL)
					j++;
				if (j < ht->size)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
