#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog.
 *
 * Description: a function that prints a struct dog.
 * @d: apointer to dog struct
 *
 * Return: Nothing
 **/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	if (d->owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
