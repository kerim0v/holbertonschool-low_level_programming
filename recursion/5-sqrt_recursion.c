#include "main.h"

/**
 * _sqrt_recursion - dsfkf
 * @n: dfs
 * Return: dfjd
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - dlfk
 * @n: dlfk
 * @i: dkgj
 * Return: dgjd
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}
