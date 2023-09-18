#include "main.h"
/**
 * swap_int - Entry point
 * Description: swap the value of two numbers
 * @a: takes first value
 * @b: takes second value
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

