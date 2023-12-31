#include "main.h"
#define NULL ((void *)0)
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: first
 * @size: size
 * Description: allocations
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);
	return (ptr);
}
