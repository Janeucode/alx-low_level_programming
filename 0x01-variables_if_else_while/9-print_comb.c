#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '100'; i++)
		putchar(i);
	if (i < '99') {
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
