#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - sad
 * @name: as
 * @age: sa
 * @owner: as
 * Return: a
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, namelen = 0, ownerlen = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[namelen] != '\0')
		namelen++;
	while (owner[ownerlen] != '\0')
		ownerlen++;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(namelen + 1);
	dog->owner = malloc(ownerlen + 1);
	if (!dog->name || !dog->owner)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	for (i = 0; i < ownerlen; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';

	return (dog);
}
