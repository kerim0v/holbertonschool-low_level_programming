#include "main.h"

/**
 * _isalpha - wdpfjpfi
 * @c - mi bombo
 * Return: 1 if success, 0 if no
 */

int _isalpha(int c)
{
	if (((c <= 'z') && (c >= 'a')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
