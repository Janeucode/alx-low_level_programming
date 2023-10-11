#include "dog.h"
#define NULL ((void *)0)
#include <stdio.h>
/**
 * print_dog - Entry point
 * @d: the pointer
 * Description: print
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name != NULL ? d->name : "nil\n");
	if (d->age != 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: nil\n");
	printf("Owner: %s\n", d->owner != NULL ? d->owner : "nil\n");
}
