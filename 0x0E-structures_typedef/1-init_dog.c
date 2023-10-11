#include <stdlib.h>
#include "dog.h"
#define NULL ((void *)0)
/**
 * init_dog - Entry point
 * @d: struct
 * @name: the name
 * @age: the age
 * @owner: owners name
 * Description: Initialization
 * Return:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
