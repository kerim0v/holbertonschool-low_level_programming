#include "main.h"

/**
 * print_last_digit - bombloo
 * @c: psdofk
 * Return: paokfp
 */

int print_last_digit(int c)
{
	int result;
       	result = (c % 10);

	if (result < 0)
		result = (-1 * result);

	_putchar(result + '0');
	return (result);
}
