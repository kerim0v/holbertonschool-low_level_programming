#include "main.h"

/**
 * *_strncpy - afj;d
 * @dest: ldkaj
 * @src: 'd;lg
 * @n: ;sdlfk
 * Return: djg
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
