#include "main.h"
/**
 * hex_digit - Convert a decimal number to a hexadecimal digit as a character
 * @num: The decimal number to be converted
 * Return: The hexadecimal digit as a character
 */
char hex_digit(int num)
{
	if (num >= 0 && num <= 9)
		return ('0' + num);
	else if (num >= 10 && num <= 15)
		return ('a' + (num - 10));
	else
		return ('?');
}
/**
 * print_buffer - Print the content of a buffer
 * @b: The buffer to be printed
 * @size: The number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		_putchar(hex_digit((i >> 24) & 0xFF));
		_putchar(hex_digit((i >> 16) & 0xFF));
		_putchar(hex_digit((i >> 8) & 0xFF));
		_putchar(hex_digit(i & 0xFF));
		_putchar(':');
		_putchar(' ');

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			_putchar(hex_digit((b[i + j] >> 4) & 0xF));
			_putchar(hex_digit(b[i + j] & 0xF));
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
		}
		if (j % 2 == 1)
			_putchar(' ');
	}
	for (j = 0; j < 10; j++)
	{
		if (i + j < size && (b[i + j] >= ' ' && b[i + j] <= '~'))
			_putchar(b[i + j]);
		else
			_putchar('.');
	}
	_putchar('\n');
	}
}
