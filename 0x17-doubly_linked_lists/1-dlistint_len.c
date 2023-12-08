#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 *  dlistint_len - Entry point
 *  @h: pointer to the header
 *  Descriptino: gets lent of doubly linked list
 *  Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
