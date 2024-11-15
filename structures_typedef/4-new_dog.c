#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog struct with a copy of name and owner.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog struct, or NULL if allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
		return (NULL);

	ptr_dog->name = strdup(name);
	if (ptr_dog->name == NULL)
	{
		free(ptr_dog);
		return (NULL);
	}

	ptr_dog->owner = strdup(owner);
	if (ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog);
		return (NULL);
	}

	ptr_dog->age = age;

	return (ptr_dog);
}
