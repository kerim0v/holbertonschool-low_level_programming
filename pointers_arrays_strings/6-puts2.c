#include "main.h"

/**
 * puts2 -poasdkpofk
 * @str: dpopfaks
 * Return: dkfsl;dk
 */

void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index] != '\0')
	{
		length++;
	}
	for (index = 0; index < length; index += 2)
		_putchar(str[index]);
	_putchar('\n');
}
