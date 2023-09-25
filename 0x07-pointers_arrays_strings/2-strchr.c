#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - Entry point
 * @s: the string to be checked
 * @c: the character we are looking for
 * Description: locate a character in a string
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
