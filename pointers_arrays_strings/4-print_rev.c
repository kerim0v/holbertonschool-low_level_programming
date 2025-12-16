#include "main.h"

/**
 * print_rev - dfsjfkdsf;l
 * @c: dkfslf
 * Return: ldkdsfd
 */

void print_rev(char *s)
{
	int i = 0;
	int a;

	while (s[i] != '\0')
		i++;
	for (a = i; a >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

