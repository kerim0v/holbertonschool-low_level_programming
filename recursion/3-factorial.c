#include "main.h"

/**
 * factorial - kdsk
 * @n: ksdf
 * Return: sdkjf
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
