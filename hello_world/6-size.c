#include <stdio.h>
/**
 * main - prints the size of various types 
 * 
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)", sizeof(char));
	printf("Size of an int: %ld byte(s)", sizeof(int));
	printf("Size of a long int: %ld byte(s)", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)", sizeof(float));

	return (0);
}
