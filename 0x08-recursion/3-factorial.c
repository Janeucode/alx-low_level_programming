#include "main.h"
/**
 * factorial - Entry point
 * @n: number to factorial
 * Description: find factorial of a given number
 * Return: int
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

