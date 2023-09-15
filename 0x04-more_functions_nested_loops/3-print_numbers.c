#include "main.h"
/**
 * print_numbers - Entry point
 * Description: print numbers ranging from 0 - 9
 * Return - 0 if sucessful
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
