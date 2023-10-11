#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * Description: a function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: owner Data.
 *
 * Return: NULL in fail,struct
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Dog;

	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);
	Dog->name = name;
	Dog->age = age;
	Dog->owner = owner;
	return (Dog);
}
