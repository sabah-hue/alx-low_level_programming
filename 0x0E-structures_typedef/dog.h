#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner data of the dog
 *
 * Description: Dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 **/
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
