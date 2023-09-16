#include "main.h"
/**
 * print_square - Entry point
 * @size: takes input for number of squares to print
 * Description: print a square
 * Return: always 0 (success)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0 ; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
