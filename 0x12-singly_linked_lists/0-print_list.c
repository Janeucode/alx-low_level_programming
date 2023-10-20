#include <stdio.h>
#include <stdlib.h>
typedef list_s{
	char *str;
	struct list_s *next;
} list_t;
/**
 * print_list - Entry point
 * @h: contents
 * Description: print list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return count;
}
