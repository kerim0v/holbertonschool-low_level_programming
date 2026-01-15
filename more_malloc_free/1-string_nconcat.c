#include "stdlib.h"

/**
 * string_noncat - df
 * @s1: d
 * @s2: sad
 * Return: sad
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len = 0, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len1] != '\0')
		len1++;
	if (len1 <= n)
		str = malloc((len + len1) * sizeof(char));
	else
		str = malloc((len + n) * sizeof(char));

	for (i = 0; i < len; i++)
		str[i] = s1[i];

	for (j = 0; j < n && j < len1; j++)
		str[i + j] = s2[i];

	str[i + j] = '\0';

	return (str);

}
