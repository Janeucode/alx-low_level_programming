#include <stdlib.h>
#include "main.h"
#define NULL ((void *)0)
/**
 * create_array - Entry point
 * @size: size of chars
 * @c: chars to make the array
 * Description: crate array with chars
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
