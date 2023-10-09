#include "main.h"
#include <stdlib.h>
#define NULL ((void *)0)
/**
 * malloc_checked - Entry point
 * @b: the assigned memory
 * Description: make sense
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
