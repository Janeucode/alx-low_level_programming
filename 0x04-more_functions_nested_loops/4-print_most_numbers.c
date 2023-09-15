#include "main.h"
/**
 * print_most_numbers - Entry point
 * Description: print numbers ranging from 0 - 9
 * Return - 0 if sucessful
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
