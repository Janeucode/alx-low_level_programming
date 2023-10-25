#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define NULL ((void *)0)
/**
 * free_listint2 - Entry point
 * Description: free list
 * @head: first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}
