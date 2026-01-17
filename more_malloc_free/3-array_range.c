#include "main.h"
#include <stdlib.h>

/**
 * array_range - as
 * @min: as
 * @max: as
 * Return: assasaasa
 */

int *array_range(int min, int max)
{
	int *p;
	int len, i;

	len = max - min + 1;

	if (min > max)
		return (NULL);

	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = min + i;

	return (p);
}
