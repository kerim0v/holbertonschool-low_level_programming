#include "lists.h"

/**
 * list_len - sdaf
 * @h: saf
 * Return: asf
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
