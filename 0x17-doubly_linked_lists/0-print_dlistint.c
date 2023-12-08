#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - Entry point
 * @h: head
 * Description: print nodes
 * Return: i;
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		i++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (i);
}
