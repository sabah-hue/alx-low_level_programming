#include "dog.h"
#include <stdlib.h>

/**
 * _strnlen - calculate length of string.
 *
 * Description: A function that return the length of a string.
 * @s: String.
 *
 * Return: length of string.
 **/
int _strnlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (c);
}
/**
 * _strncpy - Copy a string.
 *
 * Description: A function that copy a string.
 * @dest: input string
 * @src: Source string
 *
 * Return: a pointer to dest
 **/
char *_strncpy(char *dest, char *src)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
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
	int ownerLen, nameLen;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	Dog = malloc(sizeof(dog_t));
	if (Dog == NULL)
		return (NULL);
	nameLen = _strnlen(name);
	ownerLen = _strnlen(owner);
	Dog->name = malloc(sizeof(char *) * (nameLen + 1));
	if (Dog->name == NULL)
	{
		free(Dog->name);
		return (NULL);
	}
	Dog->owner = malloc(sizeof(char *) * (ownerLen + 1));
	if (Dog->owner == NULL)
		return (NULL);

	Dog->name = _strncpy(Dog->name, name);
	Dog->age = age;
	Dog->owner = _strncpy(Dog->owner, owner);
	return (Dog);
}
