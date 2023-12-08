#include "lists.h"
/**
 * sum_dlistint - Returns the sum
 * @head: Pointer to the head of the list.
 * Description: return sum
 * Return: Sum or 0 if empty`
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
