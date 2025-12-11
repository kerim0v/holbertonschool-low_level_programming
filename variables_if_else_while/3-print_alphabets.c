#include <stdio.h>

/**
 * main - prints the alhpabet lower and upper
 *
 * Return: Always 0
 */

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; l++)
		putchar (l);
	for (u = 'A': l <= 'Z'; l++)
		putchar (u);
	putchar ('\n');
	return (0);
}
