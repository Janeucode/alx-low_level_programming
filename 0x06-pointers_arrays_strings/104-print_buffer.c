#include "main.h"
#include <unistd.h>
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
	char hex_chars[] = "0123456789abcdef";

	if (size <= 0)
	{
		write(STDOUT_FILENO, "\n", 1);
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		char hex_line[50];
		char ascii_line[10];

		sprintf(hex_line, "%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				unsigned char byte = b[i + j];

				hex_line[j * 3] = hex_chars[byte >> 4];
				hex_line[j * 3 + 1] = hex_chars[byte & 0x0F];
				hex_line[j * 3 + 2] = ' ';

				if (byte >= ' ' && byte <= '~')
					ascii_line[j] = byte;
				else
					ascii_line[j] = '.';
			}
		else
		{
			hex_line[j * 3] = ' ';
			hex_line[j * 3 + 1] = ' ';
			hex_line[j * 3 + 2] = ' ';
			ascii_line[j] = ' ';
		}
	}

	hex_line[30] = ' ';
	hex_line[31] = '|';
	hex_line[32] = ' ';

	write(STDOUT_FILENO, hex_line, 34);
	write(STDOUT_FILENO, ascii_line, 10);
	write(STDOUT_FILENO, "\n", 1);
	}
}
