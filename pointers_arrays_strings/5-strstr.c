#include "main.h"

/**
 * _strstr - pdgok
 * @haystack: ;fsdlkg
 * @needle: lsakf
 * Return: a pointer to the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		i = 0;

		while (needle[i] != '\0' && haystack[i] == needle [i])
			i++;

		if (needle[i] == '\0')
			return (haystack);

		haystack++;
	}
	return ('\0');
}
