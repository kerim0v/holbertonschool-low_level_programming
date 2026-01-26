#include "function_pointers.h"

/**
 * array_iterator - sfda
 * @array: as
 * @size: asd
 * @action: sad
 * Return: asdsa
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
