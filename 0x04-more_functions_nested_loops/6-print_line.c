#include "main.h"
/**
 * print_line - Entry point
 * Description: print a straignt line
 * Return: always 0 (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
