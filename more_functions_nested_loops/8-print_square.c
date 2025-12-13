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
		for (i = 1; i <= size; i++)
		{
			_putchar('#');

			for (n = 2; n <= size; n++)
			{
			       _putchar('#');
			}
			_putchar('\n');
		}
	}
}
