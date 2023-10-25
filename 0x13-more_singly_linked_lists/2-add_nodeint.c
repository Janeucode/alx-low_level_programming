#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#define NULL ((void *)0)
/**
 * add_nodeint - Entry point
 * Description: add new node
 * @head: first node
 * @n: number of node
 * Return; listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
