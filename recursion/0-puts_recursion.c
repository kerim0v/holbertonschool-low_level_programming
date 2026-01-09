#include "main.h"

/**
 * _puts_recursion - dsj
 * @s: l;dsf
 * Return: ksdljg
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	_puts_recursion(s + 1);
}
