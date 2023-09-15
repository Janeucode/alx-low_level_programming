#include "main.h"
/**
 * more_numbers - Entry point
 * Description: print numbers times 10
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 48; i <= 62; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
