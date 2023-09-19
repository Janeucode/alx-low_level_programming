#include "main.h"
/**
 * main -entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	_putchar(s1);
	_putchar( ptr);
	return (0);
}
