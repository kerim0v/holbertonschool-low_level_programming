#include "variadic_functions.h"
#include "stdarg.h"

/**
 * sum_them_all - asdas
 * @n: asd
 * Return: asd
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	va_list ap;
	int total;
	int i;

	va_start(ap, n);
	
	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);

	return (total);
}
