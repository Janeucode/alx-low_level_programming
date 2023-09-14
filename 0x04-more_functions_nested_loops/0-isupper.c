#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int _isupper(i)
{
	if (i = 'A' && i <= 'Z'; i++)
	{
		return (1);
	}

	else if (i >= 'a' && i <= 'z'; i++)
	{
		return (0);
	}
	else
	{
		return (2);
	}
}
int main(void)
{
	_isupper();
	return (0);
}
