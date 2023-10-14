#include "variadic_functions.h"
#define VA_START(ap, last_arg)   ((ap) = (va_list)&(last_arg) + sizeof(last_arg))
#define VA_ARG(ap, type)         (*(type*)((ap) += sizeof(type), (ap) - sizeof(type)))
#define VA_END(ap)               ((void)(ap))
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

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
