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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
