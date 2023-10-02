#include "main.h"
/**
 * _sqrt_recursion_helper - Entry point
 * Description: help
 * @n: number
 * @guess: rand
 * Return: int
 */
int _sqrt_recursion_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	return (_sqrt_recursion_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Entry point
 * Description: main
 * @n: number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_helper(n, 0));
}
