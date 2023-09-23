#include <stdio.h>
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

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x%02x", b[i + j], b[i + j + 1]);
				if (j % 2 == 1)
					printf(" ");
			}
		else
			printf("    ");
	}
	printf(" ");

	for (j = 0; j < 10; j++)
	{
		if (i + j < size)
		{
			if (b[i + j] >= ' ' && b[i + j] <= '~')
				printf("%c", b[i + j]);
			else
				printf(".");
		}
	}
	printf("\n");
	}
}
