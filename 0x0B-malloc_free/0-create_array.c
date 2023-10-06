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
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
