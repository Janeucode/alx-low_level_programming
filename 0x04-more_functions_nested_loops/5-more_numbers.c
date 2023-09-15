#include "main.h"
/**
 * more_numbers - Entry point
 * Description: print numbers times 10
 * Return: always 0 (success)
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 14; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				continue;
			}
			_putchar(i + '0');
		}
	_putchar('\n');
	}
}
