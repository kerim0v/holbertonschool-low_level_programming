#include "main.h"

/**
 * print_square - pdfp
 * @size: oidwjff
 * Return: safmf
 */

void print_square(int size)
{
	int i;
	int n;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (n = 0; n < i; n++)
			       _putchar('#');
		_putchar('\n');	
		}
	}
}
