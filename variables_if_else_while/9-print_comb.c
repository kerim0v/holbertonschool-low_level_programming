#include <stdio.h>

/**
 * main - combinations
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('$');
	return (0);
}
