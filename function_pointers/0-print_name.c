#include "function_pointers.h"

/**
 * print_name - ds
 * @name: sad
 * @f: sad
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	if (name && f)
		f(name);
}
