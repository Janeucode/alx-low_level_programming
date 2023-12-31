#include <stdarg.h>
#include <stdio.h>
#define NULL ((void *)0)
#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * @separator: seperate
 * @n: number
 * Description: to doo
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
