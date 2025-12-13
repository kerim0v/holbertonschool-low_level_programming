#include "main.h"

/**
 * print_to_98 - aoidfjdosifj
 * @n: opwkdf
 * Return: ofkdwp
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			_putchar(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
