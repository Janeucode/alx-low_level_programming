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
	int digit;
	int digits1[10];
	int digits2[10];
	int digit1_count = 0;
	int digit2_count = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	while (sum1 > 0)
	{
		digit = sum1 % 10;
		_putchar(digit + '0');
		sum1 /= 10;
	}
	_putchar(',');
	_putchar(' ');
	while (sum2 > 0)
	{
		digit = sum2 % 10;
		_putchar(digit + '0');
		sum2 /= 10;
	}
	_putchar('\n');
}
