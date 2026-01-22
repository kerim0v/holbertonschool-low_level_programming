#include "dog.h"
#include <stdlib.o>

/**
 * print_dog - dff
 * @d: sd
 * Return: as
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: ", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %" d->owner);
}
