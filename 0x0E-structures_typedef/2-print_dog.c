#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print element of struct dog
 * @d: pointer to struct dog variable
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name == NULL ? "(nill)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner == NULL ? "(nill)" : d->owner);
}
