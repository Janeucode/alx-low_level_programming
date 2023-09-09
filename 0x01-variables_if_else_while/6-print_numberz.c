#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %1d byte(s)\n", siceof(char));
	printf("Size of a int: %1d byte(s)\n", siceof(int));
	printf("Size of a long: %1d byte(s)\n", siceof(long));
	printf("Size of a long long: %1d byte(s)\n", siceof(long long));
	printf("Size of a float: %1d byte(s)\n", siceof(float));
	return (0)
}
