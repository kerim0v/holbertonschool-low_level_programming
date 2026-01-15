#include "main.h"
#include "stdlib.h"

/**
 * create_array - df
 * @size: sdf
 * @c: dsf
 * Return: nullll
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
