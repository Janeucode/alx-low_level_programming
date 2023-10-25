#include "lists.h"
#define NULL ((void *)0)
#include <stddef.h>
/**
 * listint_len - Entry point
 * @h: input
 * Description: return element count
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
