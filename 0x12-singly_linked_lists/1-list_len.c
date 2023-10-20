#include "lists.h"
#include <stddef.h>
#define NULL ((void *)0)
/**
 * list_len - Entry point
 * @h: content
 * Description: print elements
 * Return: sixe_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
