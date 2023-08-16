#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a struct named dog
 * @d: pointer to struct dog variable
 * @name: first element of struct dog
 * @age: second element of struct dog
 * @owner: third element of struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
