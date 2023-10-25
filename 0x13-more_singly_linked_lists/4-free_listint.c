#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define NULL ((void *)0)
/**
 * free_listint - Entry point
 * Description: free list
 * @head: first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
