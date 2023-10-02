#include "main.h"
/**
 * is_prime_number_helper - Entry point
 * Description: Help
 * @n: number
 * @divisor: divide
 * Return: int
 */
int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	else if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	return (is_prime_number_helper(n, divisor + 1));
}
/**
 * is_prime_number - Entry point
 * Description: main
 * @n: number
 * Return: int
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
