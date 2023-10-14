#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Entry point
 * @n: number
 * Description: print sum
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	VA_START(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += VA_ARG(args, int);
	VA_END(args);
	return (sum);
}
