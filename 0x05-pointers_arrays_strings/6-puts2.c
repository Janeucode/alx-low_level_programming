#include "main.h"
/**
 * puts2 - Entry point
 * @str: given string
 * Return: void
 */
void puts2(char *str)
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
