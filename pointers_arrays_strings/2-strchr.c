#include "main.h"

/**
 * _strchr - ksdgo
 * @s: sdkgh
 * @c: gwkrjg
 * Return: dslg
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	if (s[i] == '\0')
		return (s[i]);
}
