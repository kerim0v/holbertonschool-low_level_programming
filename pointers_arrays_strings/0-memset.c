#include "main.h"

/**
 * _memset - efflkn
 * @s: dfss
 * @b: fsf
 * @n: wpdfo
 * Return: sfl
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
