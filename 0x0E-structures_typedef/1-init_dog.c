#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to a structure of type struct dog
 * @name: pointer to a char array that represents the name of the dog.
 * @age:  floating-point value that represents the age of the dog.
 * @owner: pointer to a char array represents the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}