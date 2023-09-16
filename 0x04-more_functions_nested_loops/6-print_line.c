#include "main.h"
/**
 * print_line - Entry point
 * @n: takes input for number of lines to print
 * Description: print a straignt line
 * Return: always 0 (success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
