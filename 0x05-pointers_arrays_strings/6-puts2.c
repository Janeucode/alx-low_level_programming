#include "main.h"
/**
 * _puts - Entry point
 * @str: given string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (i != 1)
			_putchar(str[i]);
	}
	_putchar('\n');
}
