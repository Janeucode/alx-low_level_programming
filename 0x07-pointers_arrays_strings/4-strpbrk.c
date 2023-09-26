#include "main.h"
#define NULL ((void *)0)
/**
 * _strpbrk: Searches for the first occurrence of any character in accept
 * Description: search for occurence of character in string
 * @s: string
 * @accept: second string
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
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
