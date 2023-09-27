#include "main.h"
/**
 * print_diagsums - Entry point
 * @a: one
 * @size: two
 * Description: does whatever
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	for (i = 0; i <= sum1 / 10; i++)
	{
		_putchar(sum1 % 10 + '0');
		sum1 /= 10;
	}
	_putchar('\n');
	for (i = 0; i <= sum2 / 10; i++)
	{
		_putchar(sum2 % 10 + '0');
		sum2 /= 10;
	}
	_putchar('\n');
}