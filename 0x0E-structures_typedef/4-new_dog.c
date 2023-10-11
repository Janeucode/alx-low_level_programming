#include "dog.h"
#include "string.h"
#define NULL ((void *)0)
#include <stdlib.h>
/**
 * new_dog - Entry point
 * @name: name
 * @age: age
 * @owner: na ham
 * Description: new dog
 * Return: not known
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
