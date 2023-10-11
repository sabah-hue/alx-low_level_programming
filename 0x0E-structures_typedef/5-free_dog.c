#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * Description: a function that frees dogs.
 * @d: pointer to dog structure
 *
 * Return: Nothing
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
