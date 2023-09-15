#include "main.h"
#include <stdio.h>
/**
 * _isupper - this function checks if letters are in uper case
 * @i: the character to be checked (ASCII value)
 *
 * Return: 1 if @i is uppercase, 0 if @i is lower case and 2 if it is neither.
 */
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}

	else if (i >= 'a' && i <= 'z')
	{
		return (0);
	}
	else
	{
		return (2);
	}
}
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char i;

	i = 'A';
	printf("'%c': %d\n", i, _isupper(i));
	i = 'a';
	printf("'%c': %d\n", i, _isupper(i));
	return (0);
}
