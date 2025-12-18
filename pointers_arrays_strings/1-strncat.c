#include "main.h"

/**
 * *_strncat - difsj
 * @dest: sl;dk
 * @src: ;dlfks
 * @n: ;dlfk
 * Return: ;afk
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
