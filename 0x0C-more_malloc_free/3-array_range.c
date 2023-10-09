#define NULL ((void *)0)
#include "main.h"
#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: small
 * @max: big
 * Description: create array
 * Return: int
 */
int *array_range(int min, int max)
{
	size_t num_elements;
	int *arr;
	size_t i;

	if (min > max)
		return (NULL);
	num_elements = max - min + 1;
	arr = malloc(num_elements * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < num_elements; ++i)
		arr[i] = min + i;
	return (arr);
}
