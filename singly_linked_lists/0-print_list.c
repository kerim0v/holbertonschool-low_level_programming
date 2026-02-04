#include "lists.h"
#include <stdio.h>

/**
 * print_list - asd
 * @h: asd
 * Return: int
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)");
		}

		h = h->next;
		i++;
	}

	return (i);
}
