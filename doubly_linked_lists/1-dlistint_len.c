#include "lists.h"

/**
 * dlistint_len - as
 * @h: saf
 * Return: asfa
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
