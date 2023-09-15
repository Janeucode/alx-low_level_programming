#include "main.h"
#include <unistd.h>
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
 * _putchar -this function prints characters
 *
 * Return: always 0 (success)
 */
int _putchar(char i)
{
	write(1, &i, 1);
	return (0);
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
	 _putchar(i);
	 _putchar(':');
	 _putchar(' ');
	 _putchar(_isupper(i) + '0');
	 _putchar('\n');

	 i = 'a';
	 _putchar(i);
	 _putchar(':');
	 _putchar(' ');
	 _putchar(_isupper(i) + '0');
	_putchar('\n');

	return (0);
}
