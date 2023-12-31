#include <stdio.h>
#define NULL ((void *)0)
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - Entry point
 * Description: add node at end
 * @head: first node
 * @n: new node
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}

