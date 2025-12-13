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
		for (i = 1; i <= size;)
		{
			for (n = 0; n <= i; n++)
			       _putchar('#');
		i++;
		_putchar('\n');	
		}
	}
}
