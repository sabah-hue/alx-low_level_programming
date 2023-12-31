#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog.
 *
 * Description: a function that initialize a variable of type struct dog..
 * @d: pointer to structure
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner data
 *
 * Return: nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
