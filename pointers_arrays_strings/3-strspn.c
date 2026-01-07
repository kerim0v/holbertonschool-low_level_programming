#include "main.h"

/**
 * _strspn - ldkg
 * @s: skg
 * @accept: kslvk
 * Return: dsokg
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				break;
		}

		if (accept[i] == '\0')
			return count;
		count++;
		s++;
	}
	return (count);
}
