#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - Entry point
 * @head: head
 * @n: new head
 * Description: add new element to list
 * Return: nwe;
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return NULL;
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return new;
}
