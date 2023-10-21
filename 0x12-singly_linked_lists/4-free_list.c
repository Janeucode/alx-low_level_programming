#include <stdio.h>
#define NULL ((void *)0)
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Entry point
 * @head: first node
 * Description: free first node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current->str);
		free(current);
	}
}
