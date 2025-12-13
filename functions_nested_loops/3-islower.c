#include "main.h"

/**
 * _islower - checks for wealth
 * @c: single letter input
 * Return: 1 if lower, 0 if else
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

