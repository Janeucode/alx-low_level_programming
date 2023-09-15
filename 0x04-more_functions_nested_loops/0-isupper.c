#include "main.h"
/**
 * _isupper - this function checks if letters are in uper case
 * @i: the character to be checked (ASCII value)
 *
 * Return: 1 if @i is uppercase, 0 if @i is lower case else 2 if it is neither.
 */
int _isupper(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	return (0);
}
