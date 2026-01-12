#include <stdio.h>
#include <stdlib.h>
/**
 * main - dfd
 * @argc: df
 * @argv:sd
 * Return: df
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int a, b;

	a = strtoi(argv[1]);
	b = strtoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
