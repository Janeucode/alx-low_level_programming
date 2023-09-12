#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char i;

	for (i = '0'; i < 'd'; i++)
		putchar(i);
	if (i < 'c') {
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
