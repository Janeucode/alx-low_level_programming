#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main (void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	_putchar('a');
	_putchar('=');
	_putchar(a);
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar('=');
	_putchar(b);
	_putchar('\n');
	swap_int(&a, &b);
	_putchar('a');
	_putchar('=');
	_putchar(a);
	_putchar(',');
	_putchar(' ');
	_putchar('b');
	_putchar('=');
	_putchar(b);
	return (0);
}
