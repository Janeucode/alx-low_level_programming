#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	for (char i = '0'; i <= '9'; i++) {
		putchar (i);
	}
	for (char i = 'a'; i <= 'f'; i++) {
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
