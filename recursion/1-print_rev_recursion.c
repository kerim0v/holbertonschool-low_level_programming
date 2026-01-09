#include "main.h"

/**
 * _print_rev_recursion - d;gj
 * @s: kdf
 * Return: ;alfk;
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
