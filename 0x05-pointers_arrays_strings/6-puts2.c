#include "main.h"
/**
 * puts2 - Entry point
 * @str: given string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i != 1 && i != 3 && i != 5 && i != 7 && i != 9 )
			_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
