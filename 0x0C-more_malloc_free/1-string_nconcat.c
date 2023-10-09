#include "main.h"
#include <string.h>
#include <stdlib.h>
#define NULL ((void *)0)
/**
 * string_nooncat - Entry point
 * @s1: first str
 * @s2: second str
 * @n: number of strings
 * Description: concantate
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_t len_s1 = strlen(s1);
	size_t len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;
	char *result = malloc(len_s1 + n + 1);

	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
