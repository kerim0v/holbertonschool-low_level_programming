#include "main.h"

/**
 * print_rev - dfsjfkdsf;l
 * @s: dkfslf
 * Return: ldkdsfd
 */

void rev_string(char *s)
{
	int c;
	int i = 0;
	char *a, x;

	while (s[i] != '\0')
		i++;

	a = s + i - 1;

	for (c = 0; c < i; c++)
	{
		x = s[c];
		s[c] = *a;
		*a = x;
		a--;
	}
}

