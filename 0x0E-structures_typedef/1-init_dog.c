#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - fnx that initialize var of type struct dog
 * @d: pointer to struct dog to initialized
 * @name: name to initialized
 * @age: age to initialized
 * @owner: owner to initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
