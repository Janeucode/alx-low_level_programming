#include "main.h"
/**
 * _strlen - Entry point
 * @s: string input
 * Description: Return the lenght of a string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

