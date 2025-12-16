#include "main.h"

/**
 * puts_half - elwifjdf
 * @str: odsjf
 * Return: odsfko
 */

void puts_half(char *str)
{
	int index = 0, length = 0;

	while (str[index] != '\0')
		length++;

	if (length % 2 == 0)
	{
		(length / 2) + 1; 
		while (str[length] != '\0')
		{
			_putchar(str[length]);
			length++;
		}
	}
	else
	{
		(length + 1) / 2;
		while (str[length] != '\0')
		{
		       	_putchar(str[length]);
		       	length++;
		}
	}
	_putchar('\n');
}
