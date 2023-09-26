#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk - locates first occurrence in string of any of the byte
 * Description: search for occurence of character in string
 * @s: string
 * @accept: second string
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
/* this function searches for occurence of a character */
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
