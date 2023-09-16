#include "main.h"
/**
 * print_diagonal - Entry point
 * @n: takes input for number of lines to print
 * Description: print a diagonal line
 * Return: always 0 (success)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1 ; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
