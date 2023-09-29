#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s: string to be printed
 * Description: Prints a string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
