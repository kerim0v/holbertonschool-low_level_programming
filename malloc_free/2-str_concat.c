#include "main.h"
#include "stdlib.h"

/**
 * str_concat - dfd
 * @s1: sda
 * @s2: fds
 * Return: asf
 */

char *str_concat(char *s1, char s2)
{
	int i = 0, j = 0, len1, len2;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	string = malloc ((len1 + len2 + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	while (i < len1)
	{
		string[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		string[i + j] = s2[j];
		j++;
	}
	string[i + j] = '\0';

	return (string);
}
