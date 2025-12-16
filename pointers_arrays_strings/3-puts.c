#include "main.h"

/**
 * _puts - kofkdf
 * @str: skad;lfk
 * Return: asdljkjklkjk
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
