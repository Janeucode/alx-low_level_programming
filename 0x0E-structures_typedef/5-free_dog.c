#include "dog.h"
#define NULL ((void *)0)
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: dog
 * Description: play
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
