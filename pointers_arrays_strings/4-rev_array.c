#include "main.h"

/**
 * reverse_array - dslgksl;gdk
 * @a: lkdjf
 * @n: asdflkm
 * Return: d;slgk
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
