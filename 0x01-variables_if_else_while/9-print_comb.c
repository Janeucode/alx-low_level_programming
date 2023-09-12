#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = '0'; i < '100'; i++)
		putchar(i);
	if (i < 99)
		putchar(', ');
	return (0);
}
