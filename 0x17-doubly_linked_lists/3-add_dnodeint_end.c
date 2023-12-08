#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Entry point
 * @head: head
 * @n: new element
 * Description: add element to tail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return new;
	}
	while (last->next != NULL)
		last = last->next;
	new->prev = last;
	last->next = new;

	return new;
}
