#include "main.h"
#include <stdio>
/**
 * print_array - Entry point
 * @n: number of elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	for (i = 0; i < n; i++)
	{	
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}

