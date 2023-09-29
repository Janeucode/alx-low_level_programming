#include "main.h"
/**
 * _strlen_recursion - Entry point
 * @s: string to check lenght of
 * Description: Returns length of string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		_strlen_recursion(len++);
		_strlen_recursion(s + 1);
	}
	return (len);
}
