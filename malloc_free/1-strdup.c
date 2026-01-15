#include "main.h"
#include "stdlib.h"

/**
 * _strdup - DF
 * @str: df
 * Return: dg
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *string;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	string = malloc((len + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);

	for (; i <= len; i++)
		string[i] = str[i];

	return (string);
}
