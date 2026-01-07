#include "main.h"

/**
 * _strchr - ksdgo
 * @s: sdkgh
 * @c: gwkrjg
 * Return: dslg
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] != '\0'; i++)
		if (s[i] == c)
			return (s);
	if (s[i] == c)
		return (s);
	return ('\0');	
}
