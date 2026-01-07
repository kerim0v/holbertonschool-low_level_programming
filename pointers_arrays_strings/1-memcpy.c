#include "main.h"

/**
 * _memcpy - sdp
 * @dest - pointer
 * @src - pointer
 * @n - int
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
