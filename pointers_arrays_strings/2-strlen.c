#include "main.h"

/**
 * _strlen - saifjo
 * @s: sdjfi
 * Return: no
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
