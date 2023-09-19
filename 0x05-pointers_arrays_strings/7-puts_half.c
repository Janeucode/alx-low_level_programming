#include "main.h"
/**
 * puts_half - Entry point
 * @str: given string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i;
	int sec;

	while (str[len] != '\0')
		len++;
	sec = (len - 1) / 2;
	for (i = sec + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

