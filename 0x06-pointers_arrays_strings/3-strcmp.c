#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: first string
 * @s2: second string
 * Description: compares two strings
 * Return: char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1) - (*(unsigned char *)s2);
}
