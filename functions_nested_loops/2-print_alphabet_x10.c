#include "main.h"

/**
 * print_alphabet_x10 - 10 times richer
 *
 * Return: no
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n <= 10;)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		n++;
	}
}
