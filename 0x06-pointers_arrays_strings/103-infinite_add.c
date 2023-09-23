#include "main.h"
#include <string.h>
/**
 * infinite_add - Add two numbers represented as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result, or 0 if the result cannot be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i = len1 - 1, j = len2 - 1, k = 0;

	if (size_r <= len1 || size_r <= len2 + 1)
		return (0);
	r[size_r - 1] = '\0';
	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		if (k >= size_r - 1)
			return (0);
		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		k++;
		i--;
		j--;
	}
	if (carry > 0 && k >= size_r - 1)
		return (0);
	if (carry > 0)
	{
		r[k] = carry + '0';
		k++;
	}
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;

	}
	r[k] = '\0';
	return (r);
}
